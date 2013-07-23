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
	{ 0x95c48ca7, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x784aaee3, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x9de0227e, "usb_kill_urb" },
	{ 0xc454d74b, "__video_register_device" },
	{ 0x13558bf7, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xb733a8fa, "mutex_lock_interruptible" },
	{ 0x7af91ae8, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x99f11a0a, "video_unregister_device" },
	{ 0x9b7ec515, "usb_set_interface" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe827d3d3, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x79291f83, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc8a59a3c, "vm_insert_page" },
	{ 0x582d5ac, "module_put" },
	{ 0xa0883e09, "usb_submit_urb" },
	{ 0xb9a26f9b, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x4e5307d5, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x8b327b4e, "usb_clear_halt" },
	{ 0xb1914769, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x118fed12, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{  0xf1338, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x38e34c31, "input_unregister_device" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x56ef8c23, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xa53bc45, "vmalloc_to_page" },
	{ 0x9468347c, "usb_alloc_coherent" },
	{ 0x62783ad3, "dev_get_drvdata" },
	{ 0xa0585e75, "usb_free_urb" },
	{ 0x4ba3497b, "video_ioctl2" },
	{ 0x701dda46, "usb_alloc_urb" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0x51a85b2f, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

