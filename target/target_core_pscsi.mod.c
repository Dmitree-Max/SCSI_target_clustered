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
	{ 0xa8b4e9a0, "passthrough_attrib_attrs" },
	{ 0x35a0ac0a, "target_backend_unregister" },
	{ 0x6db90812, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xe86aaa53, "blkdev_get_by_path" },
	{ 0x132d9b16, "scsi_device_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x84c001f1, "__scsi_execute" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdffe0d5, "blk_execute_rq_nowait" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa156bf9, "bio_alloc_bioset" },
	{ 0xb44d23af, "blk_rq_append_bio" },
	{ 0x67f1247f, "bio_add_pc_page" },
	{ 0x43a654bf, "blk_get_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xb3fd55e6, "passthrough_parse_cdb" },
	{ 0xc105f9c, "scsi_host_lookup" },
	{ 0xfc15e547, "blkdev_put" },
	{ 0xda277b5e, "scsi_device_put" },
	{ 0x5f521275, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc12796e8, "bio_put" },
	{ 0xc5850110, "printk" },
	{ 0x48ae4e27, "transport_kunmap_data_sg" },
	{ 0x93b5cead, "transport_kmap_data_sg" },
	{ 0xca4fd39e, "target_lun_is_rdonly" },
	{ 0x7f043eda, "target_complete_cmd_with_length" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2489e67d, "transport_copy_sense_to_cmd" },
	{ 0x5286a7b5, "blk_put_request" },
	{ 0x37cd8a5e, "target_complete_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67c0c54c, "pv_ops" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "AA9F75A28647AA2A245F0C1");
