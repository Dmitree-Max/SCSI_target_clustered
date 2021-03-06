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
	{ 0xb3f5950, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa748dba3, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xb19c0e3, "kernel_write" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeb9e913d, "sgl_alloc_order" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xcadda903, "configfs_undepend_item" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x81b395b3, "down_interruptible" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x44e9a829, "match_token" },
	{ 0x64444e54, "config_item_put" },
	{ 0xd0e40bb7, "filp_close" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x24acb579, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x67c0c54c, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x48bcc527, "configfs_depend_item" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xe0875eb1, "kstrtobool" },
	{ 0x92c6b5ce, "bpf_trace_run1" },
	{ 0x11089ac7, "_ctype" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xebbe12f0, "current_task" },
	{ 0xf7e07ed7, "sg_miter_start" },
	{ 0x2db3d320, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x97a57333, "crc_t10dif_update" },
	{ 0x9114dd5f, "vmap" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x7d50c917, "trace_event_reg" },
	{ 0x14faf9c9, "sg_miter_stop" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x3aed78b9, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x235ae846, "dlm_hw" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x666c39cc, "config_group_init_type_name" },
	{ 0xef3abf26, "configfs_remove_default_groups" },
	{ 0x4e3567f7, "match_int" },
	{ 0xa32b2032, "configfs_register_subsystem" },
	{ 0x9bf0516d, "fput" },
	{ 0xdb1ccd64, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x5d861475, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x284fe794, "percpu_ref_exit" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9b858114, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8d174b85, "kmem_cache_alloc" },
	{ 0xc23adf60, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x133bb3f8, "trace_event_ignore_this_pid" },
	{ 0x38d02ed1, "config_item_get_unless_zero" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5469120d, "trace_event_buffer_commit" },
	{ 0x2edbeaf7, "hex2bin" },
	{ 0xb5e1a53b, "configfs_unregister_subsystem" },
	{ 0x9ae4191f, "sbitmap_queue_init_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x81d7c5b7, "percpu_ref_kill_and_confirm" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4b2f2f28, "kmem_cache_create" },
	{ 0x88bfae9d, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x2001b0d6, "trace_event_raw_init" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xcf2a6966, "up" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xea1eebf4, "trace_raw_output_prep" },
	{ 0x41b200f9, "percpu_ref_init" },
	{ 0x6aa11aa6, "sgl_free_n_order" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x77bc13a0, "strim" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa30bcd6b, "config_group_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa8fdfe8, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf39042a8, "filp_open" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ckv");


MODULE_INFO(srcversion, "8CA61A3BABBD1DD08CC72B8");
