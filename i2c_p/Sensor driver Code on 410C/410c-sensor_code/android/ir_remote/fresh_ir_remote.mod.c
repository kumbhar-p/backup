#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0xcc651152, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xe61a6d2f, __VMLINUX_SYMBOL_STR(gpio_unexport) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x11f447ce, __VMLINUX_SYMBOL_STR(__gpio_to_irq) },
	{ 0x6c8d5ae8, __VMLINUX_SYMBOL_STR(__gpio_get_value) },
	{ 0x82f776b7, __VMLINUX_SYMBOL_STR(gpio_export) },
	{ 0x65d6d0f0, __VMLINUX_SYMBOL_STR(gpio_direction_input) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x4e67383e, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xf67d635e, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x6881b33b, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x6ff94e37, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8E354559A5BFC54165AC20D");
