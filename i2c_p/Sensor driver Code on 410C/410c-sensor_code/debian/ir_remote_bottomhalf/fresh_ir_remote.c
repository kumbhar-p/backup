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
/* BOTTOM_HALF */

void ir_do_tasklet(unsigned long);
DECLARE_TASKLET(ir_tasklet, ir_do_tasklet, 0);

static bool isPulse = 0;
static unsigned long data;

static unsigned int gpioIr = 926; 
static unsigned long long rbuf=0;
static unsigned int  nbits = 0;

static char   gpioName[8] = "gpioXXX";
static int    irqNumber;
static struct timespec ts_last, ts_current, ts_diff;

static irq_handler_t  irgpio_irq_handler(unsigned int irq, void *dev_id, struct pt_regs *regs);

static ssize_t irdata_show(struct kobject *kobj, struct kobj_attribute *attr, char *buf)
{
  return sprintf(buf, "%ld\n", data); 
}

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
   
#if 0
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
		printk(KERN_INFO "rbuf = %llx",rbuf); 
		for (i=0; i < 32; i++){
			data = data | (rbuf & (1<<(i*2)));
		}
		printk(KERN_INFO "data = %lx", data);
		nbits = 0;
	}
	}

#endif
 	
   tasklet_schedule (&ir_tasklet);
   return (irq_handler_t) IRQ_HANDLED;
}


/* BOTTOM_HALF (Using Tasklet) */

void ir_do_tasklet(unsigned long unused)
{
	
#if 1

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
		printk(KERN_INFO "rbuf = %llx",rbuf); 
		for (i=0; i < 32; i++){
			data = data | (rbuf & (1<<(i*2)));
		}
		printk(KERN_INFO "data = %lx", data);
		nbits = 0;
	}
	}

#endif
	
}


module_init(irRemote_init);
module_exit(irRemote_exit);
