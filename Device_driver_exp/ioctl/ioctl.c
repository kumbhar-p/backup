#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/types.h>
#include <linux/version.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include<linux/slab.h>                 //kmalloc()
#include<linux/uaccess.h>              //copy_to/from_user()
#include <linux/ioctl.h>

MODULE_LICENSE("Dual BSD/GPL");

dev_t dev = 0;
static struct class *dev_class;

static int ext_driver_init(void) {
    
    if(alloc_chrdev_region(&dev, 0, 1, "dyn_dev") < 0) {
        printk(KERN_INFO "can not allocate major no. for device");
        return -1;   
    }
    printk(KERN_INFO "Major No.- %d  Minor No. - %d", MAJOR(dev), MINOR(dev));

    //creating struct class
    if((dev_class = class_create(THIS_MODULE,"ext_class")) == NULL) {
        printk(KERN_INFO "can not create struct class for dev");
        goto r_class;
    }
    //creating dev
    if((device_create(dev_class, NULL, dev, NULL, "ext_dev")) == NULL) {
        printk(KERN_INFO "can not craete device");
        goto r_dev;
    }       
    printk(KERN_INFO "Kernel module inseryed sucessfully");

    return 0;
r_class:
    unregister_chrdev_region(dev, 1);
r_dev:
    class_destory(dev_class);
    return -1;
}

static void ext_driver_exit(void) {
    device_destory(dev_class,dev);
    unregister_chrdev_region(dev, 1);
    class_destory(dev_class);
    printk(KERN_INFO "Kernel module removed sucessfully");

}

module_init(ext_driver_init);
module_exit(ext_driver_exit);

MODULE_AUTHOR("Punam");                                                         
MODULE_DESCRIPTION("A sample ext driver");                              
MODULE_VERSION("1.0.0");
