#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>
#include <linux/kdev_t.h>
#include <linux/device.h>

MODULE_LICENSE("Dual BSD/GPL");

dev_t dev = 0;
static struct class *dev_class;

static int hello_world_init(void) {
    if(alloc_chrdev_region(&dev, 0, 1,"dynamic_dev") < 0) {
        printk(KERN_INFO "cannot allocate major number for device\n");
        return -1;
    }
    printk(KERN_INFO "Major No : %d  Minor No : %d\n", MAJOR(dev), MINOR(dev));
    printk(KERN_INFO "Kernel module inserted successfully\n");
    
    /*Creating struct class*/
    if((dev_class = class_create(THIS_MODULE,"etx_class")) == NULL){
        printk(KERN_INFO "Cannot create the struct class for device\n");
        goto r_class;
    }

    /*Creating device*/
    if((device_create(dev_class,NULL,dev,NULL,"etx_device")) == NULL){
        printk(KERN_INFO "Cannot create the Device\n");
        goto r_device;
    }
    printk(KERN_INFO "Kernel Module Inserted Successfully...\n");
    
    return 0;
    
r_device:
    class_destroy(dev_class);
r_class:
    unregister_chrdev_region(dev,1);
    return -1;
}

static void hello_world_exit(void) {
    
    device_destroy(dev_class,dev);
    class_destroy(dev_class);
    unregister_chrdev_region(dev, 1);
    printk(KERN_INFO "Kernel module Removed successfully\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_AUTHOR("Punam");
MODULE_DESCRIPTION("A sample hello world driver");
MODULE_VERSION("1.0.0");
