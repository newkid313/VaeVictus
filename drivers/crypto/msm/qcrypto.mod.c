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
	{ 0xf7be7f61, "crypto_aead_type" },
	{ 0x297ef6fa, "crypto_ahash_type" },
	{ 0xd3d172b, "crypto_ablkcipher_type" },
	{ 0x72126784, "platform_driver_unregister" },
	{ 0xa3b017a7, "platform_driver_register" },
	{ 0xbd942859, "debugfs_remove_recursive" },
	{ 0x23b34235, "debugfs_create_file" },
	{ 0xfd783ee2, "debugfs_create_dir" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x4a02cb77, "crypto_register_ahash" },
	{ 0x43cf7493, "_dev_info" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe650ff41, "dev_err" },
	{ 0x9bcea4c7, "crypto_register_alg" },
	{ 0xc3593841, "msm_bus_scale_register_client" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x784aaee3, "dev_set_drvdata" },
	{ 0x6cc92989, "qce_open" },
	{ 0xcfd9a2c0, "des_ekey" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xad998077, "complete" },
	{ 0x13558bf7, "mutex_unlock" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0xe827d3d3, "mutex_lock" },
	{ 0xe3f0223, "wait_for_completion_interruptible" },
	{ 0xd656dd44, "crypto_enqueue_request" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0x46ce1a07, "membank1_start" },
	{ 0x76c6f7a2, "mem_section" },
	{ 0xd53cd7b5, "membank0_size" },
	{ 0xbe917b8a, "qce_aead_req" },
	{ 0xd5152710, "sg_next" },
	{ 0x54eae506, "page_address" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0x8f189d48, "crypto_dequeue_request" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0x95c48ca7, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x118fed12, "kmem_cache_alloc_trace" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8949858b, "schedule_work" },
	{ 0x71c90087, "memcmp" },
	{ 0x91dda801, "scatterwalk_map_and_copy" },
	{ 0x7a4497db, "kzfree" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9d669763, "memcpy" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x575c81e1, "qce_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x521445b, "list_del" },
	{ 0x6e1aa070, "crypto_unregister_ahash" },
	{ 0x9a680a49, "crypto_unregister_alg" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0x62783ad3, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce40";


MODULE_INFO(srcversion, "2B12B3AD9154F781A49F877");
