#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/gpio.h>
#include <linux/interrupt.h>
#include <linux/kobject.h> 
#include <linux/time.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Somnath Ghorai");
MODULE_DESCRIPTION("A simple Linux GPIO IR remote");
MODULE_VERSION("0.1");

#define DATA_MASK 0xFFFFFF
static bool last_t_bit = 0, current_t_bit;

static bool isPulse = 0;
static unsigned long data;

static unsigned int gpioIr = 926; 
static unsigned long long rbuf=0;
static unsigned int  nbits = 0;

static char   gpioName[8] = "gpioXXX";
static int    irqNumber;
static struct timespec ts_last, ts_current, ts_diff;

static irq_handler_t  irgpio_irq_handler(unsigned int irq, void *dev_id, struct pt_regs *regs);
#if 1

static ssize_t irdata_show(struct kobject *kobj, struct kobj_attribute *attr, char *buf)
{

 
       	current_t_bit = (data & 0xFF000000)? 0 : 1;
	if(current_t_bit != last_t_bit)

	switch(data & DATA_MASK){
	case 0x100114:
//	printf("Button pressed = \" Play \" \n");
	break;
	case 0x100141:
//	printf("Button pressed = \" Stop \" \n");
	break;
	case 0x100050:
//	printf("Button pressed = \" Power \" \n");
	break;
	case 0x100115:
//	printf("Button pressed = \" Record \" \n");
	break;
	case 0x100404:
	return sprintf(buf, "%d\n", 1); 
//	printf("Button pressed = \" OK \" \n");
	break;
	case 0x100405:
	return sprintf(buf, "%d\n", 2); 
//	printf("Button pressed = \" Back \" \n");
	break;
	case 0x100145:
//	printf("Button pressed = \" Replay \" \n");
	break;
	case 0x100144:
	return sprintf(buf, "%d\n", 3); 
//	printf("Button pressed = \" Skip \" \n");
	break;
	case 0x100111:
//	printf("Button pressed = \" Rew \" \n");
	break;
	case 0x100401:
//	printf("Button pressed = \" Right \" \n");
	break;
	case 0x100400:
//	printf("Button pressed = \" Left \" \n");
	break;
	case 0x100154:
//	printf("Button pressed = \" Up \" \n");
	break;
	case 0x100155:
//	printf("Button pressed = \" Down \" \n");
	break;
	case 0x100100:
//	printf("Button pressed = \" Vol+ \" \n");
	break;
	case 0x100101:
//	printf("Button pressed = \" Vol- \" \n");
	break;
	case 0x100104:
//	printf("Button pressed = \" Ch+ \" \n");
	break;
	case 0x100105:
//	printf("Button pressed = \" Ch- \" \n");
	break;
	case 0x100051:
//	printf("Button pressed = \" Start \" \n");
	break;
	case 0x100054:
//	printf("Button pressed = \" Mute \" \n");
	break;
	case 0x101040:
//	printf("Button pressed = \" Record TV \" \n");
	break;
	case 0x100414:
//	printf("Button pressed = \" Guide \" \n");
	break;
	case 0x100411:
//	printf("Button pressed = \" Live TV \" \n");
	break;
	case 0x100410:
//	printf("Button pressed = \" DVD Menu \" \n");
	break;
	case 0x100110:
//	printf("Button pressed = \" Fwd \" \n");
	break;
	case 0x100140:
//	printf("Button pressed = \" Pause \" \n");
	break;
	case 0x100055:
//	printf("Button pressed = \" More \" \n");
	break;
	default:
	//printf("Invalid button"); 
	break;
	}

	return 0;
//	return sprintf(buf, "%ld\n", data);
}
#endif

static struct kobj_attribute ir_attr = __ATTR_RO(irdata);

static struct attribute *ir_attrs[] = {
      &ir_attr.attr,
      NULL,
};

static struct attribute_group attr_group = {
      .name  = gpioName,
      .attrs = ir_attrs,
};

static struct kobject *ir_kobj;

static int __init irRemote_init(void){
   int result = 0;
   unsigned long IRQflags = IRQF_TRIGGER_RISING | IRQF_TRIGGER_FALLING;

   printk(KERN_INFO "IR Remote: Initializing the IR Remote LKM\n");
   sprintf(gpioName, "gpio%d", gpioIr);

   ir_kobj = kobject_create_and_add("irRemote", kernel_kobj->parent);
   if(!ir_kobj){
      printk(KERN_ALERT "IR Remote: failed to create kobject mapping\n");
      return -ENOMEM;
   }

   result = sysfs_create_group(ir_kobj, &attr_group);
   if(result) {
      printk(KERN_ALERT "IR Remote: failed to create sysfs group\n");
      kobject_put(ir_kobj);
      return result;
   }
   getnstimeofday(&ts_last);
   ts_diff = timespec_sub(ts_last, ts_last);

   gpio_request(gpioIr, "sysfs");
   gpio_direction_input(gpioIr);
   gpio_export(gpioIr, false);

   printk(KERN_INFO "IR Remote: The gpio state is currently: %d\n", gpio_get_value(gpioIr));

   irqNumber = gpio_to_irq(gpioIr);
   printk(KERN_INFO "IR Remote: The irData is mapped to IRQ: %d\n", irqNumber);

   result = request_irq(irqNumber,
                        (irq_handler_t) irgpio_irq_handler,
                        IRQflags,
                        "ir_remote_handler",
                        NULL);
   return result;
}

static void __exit irRemote_exit(void){
   kobject_put(ir_kobj);
   free_irq(irqNumber, NULL);
   gpio_unexport(gpioIr);
   gpio_free(gpioIr);
   printk(KERN_INFO "IR Remote: Goodbye from the IR Remote LKM!\n");
}

static irq_handler_t irgpio_irq_handler(unsigned int irq, void *dev_id, struct pt_regs *regs){
   static int i,j;
   getnstimeofday(&ts_current);
   ts_diff = timespec_sub(ts_current, ts_last);
   ts_last = ts_current;
	isPulse = !isPulse;
	i = (ts_diff.tv_nsec / 1000) / 400;
	if(i<7) {
	if(i==6){
		isPulse = 1;
		nbits = 0;
	}
	for (j=0;j<i;j++){
	rbuf = (rbuf << 1) | isPulse;
	}
	nbits = nbits + i;
        if(nbits >=83){
		data = 0;
		printk(KERN_INFO "rbuf = %llx\n",rbuf); 
		for (i=0; i < 32; i++){
			data = data | (rbuf & (1<<(i*2)));
		}
		printk(KERN_INFO "data = %lx\n", data);
		nbits = 0;
	}
	} 
   return (irq_handler_t) IRQ_HANDLED;
}

module_init(irRemote_init);
module_exit(irRemote_exit);
