#include<linux/module.h>
#include<linux/moduleparam.h>
#include<linux/sched.h>
#include<linux/fs.h>
#include<linux/types.h>
#include<linux/kdev_t.h>
#include<linux/cdev.h>
#include<linux/device.h>
#include<asm/uaccess.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Mallamma");

//dev_t dev_no = 1073741824;
static char *devname = "char_dev";
dev_t mej_min;
char buf[30] = {0} ;
static struct cdev *my_cdev;
module_param(devname,charp,0);
//class and device structures
static struct class *mychar_class;
static struct device *mychar_device;

//ssize_t myRead(struct file *,char __user *,size_t ,loff_t *);
ssize_t myWrite(struct file *,const char __user *,size_t,loff_t *);
int myOpen(struct inode *,struct file *);
int myRelease(struct inode *,struct file *);

struct file_operations fops ={
	.owner = THIS_MODULE,
//	.read = myRead,
	.write = myWrite,
	.open = myOpen,
	.release = myRelease
};

int myOpen(struct inode *id,struct file *fp)
{
	printk(KERN_INFO"open successful\n");
	return 0;
}
int myRelease(struct inode *id,struct file *fp)
{
	printk(KERN_INFO"close successful\n");
	return 0;
}

/*ssize_t myRead(struct file *fp,char __user *us,size_t count,loff_t *lt)
{
	char vbuf[20] ="kernel written data";
	copy_to_user(us,vbuf,30);
	printk(KERN_INFO"read successful\n");
	return count;
}*/
ssize_t myWrite(struct file *fp,const char __user *us,size_t count ,loff_t *lt)
{
		
	copy_from_user( buf, us, 30);

	printk(KERN_INFO "%s\n", buf );
	printk(KERN_INFO"write successful\n");
	return count;
}
static int __init  hello_init(void)
{
	int state;
	if(0 != (state = alloc_chrdev_region(&mej_min,0,1,devname)))
		printk(KERN_NOTICE "registertation of device failed %d\n",state);
	printk(KERN_ALERT "maj %d\n",MAJOR(mej_min));
	printk(KERN_ALERT "min %d\n",MINOR(mej_min));
	
	if(NULL == (my_cdev = cdev_alloc()))
		printk(KERN_NOTICE "cdev alloc failed\n");

	cdev_init(my_cdev,&fops);
	my_cdev->owner = THIS_MODULE;

	if( 0 != (cdev_add(my_cdev,mej_min,1)))
		printk(KERN_NOTICE"cdev add failed\n");
		
	 //Create a class and entry in sysfs
        mychar_class = class_create(THIS_MODULE, devname);
        if (IS_ERR(mychar_class)) {
                printk (KERN_ERR "class_create() failed \n");
        }

        //create mychar_device in sysfs and an
        //device entry will be made in /dev directory
        mychar_device = device_create (mychar_class, NULL, mej_min, NULL, devname);
        if(IS_ERR(mychar_device)) {
                printk (KERN_ERR "device_create() failed \n");
        }

	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "goodbye, cruel world\n");
        device_destroy (mychar_class, mej_min);
        class_destroy(mychar_class);
	cdev_del(my_cdev);
	unregister_chrdev_region(mej_min,1);
	return;
	
}

module_init(hello_init);
module_exit(hello_exit);

