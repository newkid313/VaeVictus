#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2a615a9f, "module_layout" },
	{ 0x95c48ca7, "kmalloc_caches" },
	{ 0x9f9c4e9, "clk_reset" },
	{ 0x6faade5b, "clk_enable" },
	{ 0x13008968, "dma_unmap_sg" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x45a9367e, "dma_map_sg" },
	{ 0xf6d0a746, "clk_disable" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xd5152710, "sg_next" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xe650ff41, "dev_err" },
	{ 0xe4d14011, "msm_dmov_enqueue_cmd" },
	{ 0x3db3d469, "dma_free_coherent" },
	{ 0x3470e5a1, "platform_get_resource" },
	{ 0xa7b3c114, "dma_alloc_coherent" },
	{ 0x43cf7493, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x118fed12, "kmem_cache_alloc_trace" },
	{ 0x6de2f0a7, "clk_get" },
	{ 0x3a31bafd, "clk_set_rate" },
	{ 0x68473cd3, "platform_get_resource_byname" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8ff97ceb, "__msm_ioremap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "024B2632D919B85C4C856DA");
