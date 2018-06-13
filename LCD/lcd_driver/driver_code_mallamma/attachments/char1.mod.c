#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc9894eed, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x764a9825, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xe3a3f2c8, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x467cfd09, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf70d790f, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xcffeda2b, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x48717e5b, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x801f4bb2, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x7ccd13de, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x7b9b0b81, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7951A944955E47A5A2AE81E");
