#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <asm/page.h>
#include<asm/highmem.h>

MODULE_LICENSE ("Dual BSD/GPL");

#define FIRST_MINOR	10 // minor number should start from 10
#define NR_DEVS 1	//	Number of device numbers


int myOpen (struct inode *inode,struct file *filep);
int myRelease (struct inode *in,struct file *fp);
long myIoctl(struct file *fd,unsigned int pid, unsigned long int p);
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
	printk (KERN_INFO "Open successful\n");
	return 0;
}
long myIoctl(struct file *fd, unsigned int pid, unsigned long int p)
{
    struct task_struct *task = current;        // current is a macro it will priovide current process descriptor //
    pgd_t *pg_d = NULL;
    pte_t *pt_e = NULL;
    int x = 0;
    int y = 0;
    pg_d = task->mm->pgd;
    printk("%d  %d %d \n",PTRS_PER_PGD,PTRS_PER_PMD,PTRS_PER_PTE);	 // these are the macros which give no of entry//
    printk("%lu\n",(unsigned long int )pg_d);
    while(x < PTRS_PER_PGD){

        if(pg_d->pgd != 0){          // checking non null entry
           printk("*******pgd[%d] = %lx **********\n", x, pg_d -> pgd );
        }
        pt_e= kmap(mem_map + ( pg_d -> pgd >> 12 ));       // kmap will convert physical addr to virtual addr //
        while(y < PTRS_PER_PTE){            // checking non null entry
            if(pt_e->pte != 0)
                printk("********pte[%d] = %lx***********\n", y, pt_e->pte);
            pt_e++;

            y++;
        }
        y = 0;
        pg_d++;
        x++;
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

	printk (KERN_INFO "Initializing Character Device \n");

	status	=	alloc_chrdev_region (&mydev, FIRST_MINOR, NR_DEVS, devname);

if (status < 0)
{
	printk (KERN_NOTICE "Device numbers allocation failed: %d \n",status);
	goto err;
}

printk (KERN_INFO "Major number allocated = %d \n",MAJOR(mydev));
my_cdev	=	cdev_alloc ();

if (my_cdev == NULL) {
	printk (KERN_ERR "cdev_alloc failed \n");
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
	printk (KERN_ERR "class_create() failed \n");
	goto err_class_create;
}

mychar_device =	device_create (mychar_class, NULL, mydev, NULL, devname);
if (IS_ERR(mychar_device)) {
	printk (KERN_ERR "device_create() failed \n");
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
	printk (KERN_INFO "Exiting the Character Driver \n");

	device_destroy (mychar_class, mydev);
	class_destroy (mychar_class);
	cdev_del (my_cdev);
	unregister_chrdev_region (mydev, NR_DEVS);

	return;
}

module_init (myInit); // macros provided by the kernel
module_exit (myExit);

