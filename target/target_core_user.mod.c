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
	{ 0x7c060704, "sbc_get_device_type" },
	{ 0x35a0ac0a, "target_backend_unregister" },
	{ 0xa748dba3, "kmem_cache_destroy" },
	{ 0x67482451, "root_device_unregister" },
	{ 0x29638a39, "genl_unregister_family" },
	{ 0x6db90812, "transport_backend_register" },
	{ 0x6ebf6ffc, "passthrough_pr_attrib_attrs" },
	{ 0xa8b4e9a0, "passthrough_attrib_attrs" },
	{ 0x8af5015, "genl_register_family" },
	{ 0xbf8e4fb1, "__root_device_register" },
	{ 0x4b2f2f28, "kmem_cache_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe18591a7, "uio_unregister_device" },
	{ 0x4e5ccc90, "__uio_register_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x66d29e23, "nla_put_64bit" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x4ef96045, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0x4ab97102, "genlmsg_put" },
	{ 0x7b2cb917, "__alloc_skb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8d174b85, "kmem_cache_alloc" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xb3f5950, "alloc_pages_current" },
	{ 0xc2f91b60, "uio_event_notify" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xeb7018ec, "unmap_mapping_range" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x2489e67d, "transport_copy_sense_to_cmd" },
	{ 0x7f043eda, "target_complete_cmd_with_length" },
	{ 0x37cd8a5e, "target_complete_cmd" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xebbe12f0, "current_task" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x67c0c54c, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0xf12e8562, "kfree_skb" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x2d523513, "genlmsg_multicast_allns" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xbcbdf60f, "kstrtos8" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6aa49823, "vmalloc_to_page" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x3aed78b9, "kmem_cache_free" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x999e8297, "vfree" },
	{ 0xc23adf60, "__free_pages" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xb3fd55e6, "passthrough_parse_cdb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa6257a2f, "complete" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0xc5850110, "printk" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,uio");


MODULE_INFO(srcversion, "6CA0A81826BD8BDB2B2E90D");
