#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <linux/device.h>
#include <linux/slab.h>


#define VM_NONE		0x00000000
#define VM_READ		0x00000001	/* currently active flags */
#define VM_WRITE	0x00000002
#define VM_EXEC		0x00000004
#define VM_SHARED	0x00000008
MODULE_LICENSE ("Dual BSD/GPL");

#define FIRST_MINOR	10 // minor number should start from 10
#define NR_DEVS 1	//	Number of device numbers


int myOpen (struct inode *inode,struct file *filep);
int myRelease (struct inode *in,struct file *fp);
long myIoctl(struct file *fd,unsigned int x,unsigned long int y);
void rec_path(struct dentry *d);
static int myInit (void);
static void myExit (void);

struct file_operations fops = { // registration to kernel
		.owner	=	THIS_MODULE,
		.open	=	myOpen,
		.unlocked_ioctl = myIoctl,
		.release	=	myRelease
};

char *devname;
int majNo;
static dev_t mydev;
struct cdev *my_cdev;

module_param (devname, charp, 0000);

static struct class *mychar_class;
static struct device *mychar_device;


int myOpen (struct inode *inode, struct file *filep)
{	
	printk ( "Open successful\n");
	return 0;
}

void rec_path (struct dentry *d)
{
	if ((d -> d_parent) != (d)) {
		rec_path (d -> d_parent);
	    printk ("/%s",d -> d_name.name);
	}
}

long myIoctl(struct file *fd, unsigned int x, unsigned long int y)
{

    struct task_struct *task1 = current;
    struct vm_area_struct *task2;

    task2 = task1->mm->mmap;
    while ( task2 ) {

        printk("%08x-%08x ",(unsigned int) task2-> vm_start,(unsigned int)task2 -> vm_end);      // starting and end address //

        if(((task2->vm_flags)&(VM_READ)) == VM_READ)       // flags (permissions ) for each region //
            printk("r");

        else
            printk("-");

        if(((task2->vm_flags)&(VM_WRITE)) == (VM_WRITE)){
            printk("w");
        }
        else 
            printk("-");

        if(((task2->vm_flags)&(VM_EXEC)) == VM_EXEC)
            printk("x");
        else 
            printk("-");

        printk("p ");
        printk( "%08x ",(unsigned int)task2->vm_pgoff << PAGE_SHIFT);


        if(task2->vm_file != NULL){                 // major and minor number //
            printk("%02d:%02d ",MAJOR(task2->vm_file->f_path.dentry->d_sb->s_dev),MINOR(task2->vm_file->f_path.dentry->d_sb->s_dev));	

            printk("%-7ld  ",task2->vm_file->f_inode->i_ino);            // printing inode number //
 
            rec_path (task2 -> vm_file -> f_path.dentry );              // printing directory names  (path)//

            printk ("\n");

        }
        else {                                                    // null region enties (stack & heap) //

            printk ("00:00 ");
            printk("%-7i  ",0);
            if (((task2 -> vm_mm -> start_stack) > (task2 -> vm_start )) && ((task2 -> vm_mm -> start_stack) < (task2 -> vm_end)))  {
                printk ("[%s] \n","stack");
            }
            else if (((task2-> vm_mm -> start_brk) > (task2 -> vm_start )) && ((task2-> vm_mm -> start_brk)< (task2 -> vm_end)))  {
                printk ("[%s] \n","heap");
            }
            else
                printk ("\n");

        }

        task2 = task2->vm_next;
    }
    return 0;
} 

int myRelease (struct inode *in, struct file *fp)
{
	printk (KERN_INFO "File released \n");
	return 0;
}

static int __init myInit (void)
{
	int ret	=	-ENODEV;
	int status;

	printk ( "Initializing Character Device \n");

	status	=	alloc_chrdev_region (&mydev, FIRST_MINOR, NR_DEVS, devname);

if (status < 0)
{
	printk ( "Device numbers allocation failed: %d \n",status);
	goto err;
}

printk ( "Major number allocated = %d \n",MAJOR(mydev));
my_cdev	=	cdev_alloc ();

if (my_cdev == NULL) {
	printk ( "cdev_alloc failed \n");
	goto err_cdev_alloc;
}

cdev_init (my_cdev, &fops);
my_cdev->owner	=	THIS_MODULE;

status	=	cdev_add (my_cdev, mydev, NR_DEVS);
if (status) {
	printk (KERN_ERR "cdev_add failed \n");
	goto err_cdev_add;
}

mychar_class	=	class_create (THIS_MODULE, devname);
if (IS_ERR(mychar_class)) {
	printk ("class_create() failed \n");
	goto err_class_create;
}

mychar_device =	device_create (mychar_class, NULL, mydev, NULL, devname);
if (IS_ERR(mychar_device)) {
	printk ("device_create() failed \n");
	goto err_device_create;
}

return 0;

err_device_create:
	class_destroy (mychar_class);

err_class_create:
	cdev_del(my_cdev);

err_cdev_add:
	kfree (my_cdev);

err_cdev_alloc:
	unregister_chrdev_region (mydev, NR_DEVS);

err:
	return ret;
}


static void myExit (void)
{
	printk ("Exiting the Character Driver \n");

	device_destroy (mychar_class, mydev);
	class_destroy (mychar_class);
	cdev_del (my_cdev);
	unregister_chrdev_region (mydev, NR_DEVS);

	return;
}

module_init (myInit); // macros provided by the kernel
module_exit (myExit);

