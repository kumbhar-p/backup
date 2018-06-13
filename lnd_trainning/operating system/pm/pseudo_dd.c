#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/sched.h>
#include<linux/cdev.h>
#include<asm/uaccess.h>
#include<asm/current.h>
#include<linux/device.h>
#include<linux/slab.h>

MODULE_LICENSE("Dual BSD/GPL");

/** Constants **/
#define FIRST_MINOR	10
#define NR_DEVS 1		//Number of device numbers

//Function Declarations for syscall definitions
int myOpen(struct inode *inode, struct file *filep);
int myRelease(struct inode *in, struct file *fp);

long myIoctl(struct file *fp, unsigned int command, unsigned long arg);

//InitiaLIZATION ROUTINES
static int myInit(void);
static void myExit(void);

struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = myOpen,
	.release = myRelease,
	.unlocked_ioctl = myIoctl
};

/*Global variables */
char *devname;			//contains device name
int majNo;
static dev_t mydev;		// encodes major number and minor number 
struct cdev *my_cdev;		// holds character device driver descriptor
/* To accept input from command line */
module_param(devname, charp, 0000);

// class and device structures 

static struct class *mychar_class;
static struct device *mychar_device;

/* 
 * myopen: open function of the pseudo driver 
 *
 */

int myOpen(struct inode *inode, struct file *filep)
{

	printk( /*"4"*KERN_WARNING* KERN_DEFAULT */ KERN_INFO
	       "Open succesful\n");
	return 0;
}

/* myRelease : close function of the pseudo driver 
 *
 */

int myRelease(struct inode *in, struct file *fp)
{
	printk(KERN_INFO "File released\n");
	return 0;
}


tong myIoctl(struct file *fp, unsigned int command, unsigned long arg)
{
	struct task_struct *task = current; 
	struct task_struct *p;
	 
	// ps command implementation	

	/*for(p = &init_task; (p = list_entry((p) -> tasks.next, struct task_struct, tasks)) != &init_task;)
		printk(KERN_INFO "pid = %-8d name: %s   \n",p -> pid, p -> comm);
	*/	
	//traversing task_struct

/*	printk(KERN_INFO "myIoctl() is running... :) \n");
	printk(KERN_INFO "current address %p\n", current);
	printk(KERN_INFO "TTY %s\n",pointer -> signal -> tty);
	printk(KERN_INFO "pid = %d , tgid = %d\n", task -> pid, task -> tgid);
	
*/	
	//printk(KERN_INFO "vfs address = %p\n", task -> files);
	
	struct vm_area_struct *pointer = task -> mm -> mmap;


	while (pointer){
		printk(KERN_CONT " address of vm_area %0.8lx-%0.8lx", pointer -> vm_start, pointer -> vm_end);
		pointer = pointer -> vm_next;
	}
	//printk("%p\n", pointer -> vm_start);

	//printk(KERN_INFO "start address of vm_area %p\n", task -> mm -> mmap -> vm_start);
	return 0;
}

/* myInit : init function of the kernel module 
 *
 */
static int __init myInit(void)
{
	int ret = -ENODEV;
	int status;

	printk(KERN_INFO "Initializing Character Device\n");

	//Allocating Device NUmbers 
	//
	status = alloc_chrdev_region(&mydev, FIRST_MINOR, NR_DEVS, devname);
	if (status < 0) {
		printk(KERN_NOTICE "Device numbers allocation failed %d \n",
		       status);
		goto err;

	}
	printk("mydev====>%d\n", mydev);
	printk(KERN_INFO "Major number allocated = %d \n ", MAJOR(mydev));
	my_cdev = cdev_alloc();	//Allocate memory for my_cdev;
	if (my_cdev == NULL) {
		printk(KERN_ERR "cdev_alloc failed\n");
		goto err_cdev_alloc;
	}

	cdev_init(my_cdev, &fops);	// Initialize my_cdev with fops
	my_cdev->owner = THIS_MODULE;

	status = cdev_add(my_cdev, mydev, NR_DEVS);	//Add my_cdev to the list
	if (status) {
		printk(KERN_ERR "cdev_add failed\n");
		goto err_cdev_add;
	}
	printk("**************mydev====>%d\n", mydev);

	// create class and entry in sysfs 

	mychar_class = class_create(THIS_MODULE, devname);
	if (IS_ERR(mychar_class)) {
		printk(KERN_ERR "class_create() failed \n");
		goto err_class_create;
	}
	//creates mychar_device in sysfs and an
	//device entry willl be made in /dev directory
	mychar_device = device_create(mychar_class, NULL, mydev, NULL, devname);
	if (IS_ERR(mychar_device)) {
		printk(KERN_ERR "device_create() failed\n");
		goto err_device_create;
	}
	return 0;
 
 err_device_create:
	class_destroy(mychar_class);

 err_class_create:
	cdev_del(my_cdev);
 err_cdev_add:
	kfree(my_cdev);

 err_cdev_alloc:
	unregister_chrdev_region(mydev, NR_DEVS);
 err:
	return ret;
}


/*
 * myExit:cleanup function of the kernel module
 */
static void myExit(void)
{
	printk(KERN_INFO "Exiting the Character Driver\n");

	device_destroy(mychar_class, mydev);
	class_destroy(mychar_class);
	cdev_del(my_cdev);
	unregister_chrdev_region(mydev, NR_DEVS);

	return;
}

module_init(myInit);
module_exit(myExit);
