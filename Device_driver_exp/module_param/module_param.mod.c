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
	{ 0x6c1ec64f, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbb9eb74, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x4eaf050e, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9f8d5671, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "02EA2293287504114112F34");
