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
	{ 0xf6544112, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x692ac6ec, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x7da4a3b2, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9bfd4a1a, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xc816bb15, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xe41bebde, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc93fd2f4, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x46a9fc16, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xad757b0, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xfa7365bc, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "551E480EAC9F25FAE7BE16A");
