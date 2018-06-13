#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_world_init(void) {
    printk(KERN_INFO "welcome to GESL\n");
    printk(KERN_INFO "This is sample module\n");
    printk(KERN_INFO "Kernel module inserted successfully\n");
    return 0;
}

static void hello_world_exit(void) {
    printk(KERN_INFO "Kernel module Removed successfully\n");
}
module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_AUTHOR("Punam");
MODULE_DESCRIPTION("A sample hello world driver");
MODULE_VERSION("1.0.0");
