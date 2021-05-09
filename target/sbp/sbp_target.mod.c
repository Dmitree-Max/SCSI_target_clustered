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
	{ 0xc7c43c2a, "target_unregister_template" },
	{ 0x2968576b, "target_register_template" },
	{ 0x2885fec5, "fw_get_request_speed" },
	{ 0xf902c631, "target_execute_cmd" },
	{ 0x14faf9c9, "sg_miter_stop" },
	{ 0x5d861475, "sg_miter_next" },
	{ 0xf7e07ed7, "sg_miter_start" },
	{ 0xd1f97dcf, "target_submit_cmd" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe2a93aaf, "target_put_sess_cmd" },
	{ 0x67c0c54c, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a87d199, "target_setup_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0xb9328ece, "core_tpg_register" },
	{ 0x8bd5d270, "fw_core_add_address_handler" },
	{ 0x71072210, "core_tpg_deregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf73577fd, "fw_core_remove_address_handler" },
	{ 0x701920cf, "target_remove_session" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe86fb5c7, "fw_card_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcc3d5be4, "fw_send_response" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd5a11715, "transport_generic_free_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x727c72cc, "fw_run_transaction" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,firewire-core");


MODULE_INFO(srcversion, "A2791EC4F0013B53F2913AA");
