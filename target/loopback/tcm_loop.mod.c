#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x9de7765d, "module_layout" },
	{ 0x2c22ebd9, "scsi_change_queue_depth" },
	{ 0xc7c43c2a, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa748dba3, "kmem_cache_destroy" },
	{ 0x2968576b, "target_register_template" },
	{ 0xbba099ff, "driver_register" },
	{ 0x21fb6cf9, "bus_register" },
	{ 0xbf8e4fb1, "__root_device_register" },
	{ 0x4b2f2f28, "kmem_cache_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8a87d199, "target_setup_session" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x20253b5, "device_register" },
	{ 0x947af53b, "dev_set_name" },
	{ 0x754d539c, "strlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x67482451, "root_device_unregister" },
	{ 0x51eedf1f, "bus_unregister" },
	{ 0xbbdb30da, "driver_unregister" },
	{ 0xd5a11715, "transport_generic_free_cmd" },
	{ 0xf902c631, "target_execute_cmd" },
	{ 0xa6257a2f, "complete" },
	{ 0x2177f9b1, "scsi_add_host_with_dma" },
	{ 0xfdb5a7c3, "scsi_host_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x56dccdf0, "scmd_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4917e9a8, "target_submit_cmd_map_sgls" },
	{ 0xe2a93aaf, "target_put_sess_cmd" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x8d3f8589, "target_submit_tmr" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8d174b85, "kmem_cache_alloc" },
	{ 0x3aed78b9, "kmem_cache_free" },
	{ 0x3171acd7, "seq_puts" },
	{ 0x5f521275, "scsi_host_put" },
	{ 0x6b6c604, "scsi_remove_host" },
	{ 0xd593567d, "device_unregister" },
	{ 0xb9328ece, "core_tpg_register" },
	{ 0x71072210, "core_tpg_deregister" },
	{ 0x5d90d8b3, "scsi_add_device" },
	{ 0xda277b5e, "scsi_device_put" },
	{ 0x7d5d8eff, "scsi_remove_device" },
	{ 0x70493f68, "scsi_device_lookup" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x701920cf, "target_remove_session" },
	{ 0xcd1d97b8, "core_allocate_nexus_loss_ua" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "DFFE162224F20817AEE7B9D");
