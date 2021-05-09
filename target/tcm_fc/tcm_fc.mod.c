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
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0xfa4667d1, "fc_seq_release" },
	{ 0x69de56ed, "param_ops_int" },
	{ 0xe2a93aaf, "target_put_sess_cmd" },
	{ 0xb9328ece, "core_tpg_register" },
	{ 0xa7e2d533, "fc_fc4_register_provider" },
	{ 0x24f7c28f, "fc_lport_iterate" },
	{ 0xd5a11715, "transport_generic_free_cmd" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2968576b, "target_register_template" },
	{ 0x3969b463, "target_sess_cmd_list_set_waiting" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x71072210, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xd1f97dcf, "target_submit_cmd" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8d1cbeec, "fc_seq_assign" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0x71d81ac1, "_fc_frame_alloc" },
	{ 0xebbe12f0, "current_task" },
	{ 0xa3bcccab, "fc_fill_reply_hdr" },
	{ 0xc5850110, "printk" },
	{ 0x811811e0, "fc_exch_done" },
	{ 0x1fcce07f, "core_tpg_set_initiator_node_tag" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2c0b681d, "fc_fc4_deregister_provider" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x701920cf, "target_remove_session" },
	{ 0x85e01831, "fc_frame_alloc_fill" },
	{ 0x46af4aac, "fc_seq_set_resp" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8a87d199, "target_setup_session" },
	{ 0xc7c43c2a, "target_unregister_template" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf12e8562, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0x7f3407a7, "fc_seq_start_next" },
	{ 0xe5cf06b5, "fc_lport_notifier_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x345e9d86, "target_wait_for_sess_cmds" },
	{ 0x8d3f8589, "target_submit_tmr" },
	{ 0x930177a2, "fc_seq_send" },
	{ 0xf902c631, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "libfc,target_core_mod");


MODULE_INFO(srcversion, "FC3A335DA6DD7C1FF505F84");
