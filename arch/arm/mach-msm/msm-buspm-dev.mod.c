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
	{ 0x2a615a9f, "module_layout" },
	{ 0x3ce8a94a, "noop_llseek" },
	{ 0x5cc1f09a, "misc_deregister" },
	{ 0x54b91396, "misc_register" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x27e1a049, "printk" },
	{ 0x3f71b3c4, "memory_pool_node_paddr" },
	{ 0x1ae9a10c, "allocate_contiguous_ebi" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7d99d127, "remap_pfn_range" },
	{ 0x95c48ca7, "kmalloc_caches" },
	{ 0x118fed12, "kmem_cache_alloc_trace" },
	{ 0xc6cbbc89, "capable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c3bcca8, "free_contiguous_memory" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "935C89EC55B454815F921CD");
