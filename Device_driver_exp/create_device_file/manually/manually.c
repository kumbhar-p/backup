#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>

MODULE_LICENSE("Dual BSD/GPL");

dev_t dev = 0;

static int hello_world_init(void) {
    if(alloc_chrdev_region(&dev, 0, 1,"dynamic_dev") < 0) {
        printk(KERN_INFO "cannot allocate major number for device\n");
        return -1;
    }
    printk(KERN_INFO "Major No : %d  Minor No : %d\n", MAJOR(dev), MINOR(dev));
    printk(KERN_INFO "Kernel module inserted successfully\n");
    return 0;
}

static void hello_world_exit(void) {
    unregister_chrdev_region(dev, 1);
    printk(KERN_INFO "Kernel module Removed successfully\n");
}
module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_AUTHOR("Punam");
MODULE_DESCRIPTION("A sample hello world driver");
MODULE_VERSION("1.0.0");
