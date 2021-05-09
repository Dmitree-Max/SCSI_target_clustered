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
	{ 0x33d1de29, "sbc_attrib_attrs" },
	{ 0x7c060704, "sbc_get_device_type" },
	{ 0x35a0ac0a, "target_backend_unregister" },
	{ 0x6db90812, "transport_backend_register" },
	{ 0xb4685b22, "blkdev_issue_zeroout" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb170e7df, "sbc_get_write_same_sectors" },
	{ 0xf7e07ed7, "sg_miter_start" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7639c8cc, "bio_add_page" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8d7c56ef, "bioset_integrity_create" },
	{ 0x924948f5, "target_configure_unmap_from_queue" },
	{ 0xe86aaa53, "blkdev_get_by_path" },
	{ 0xfd64ae59, "bioset_init" },
	{ 0xdebca193, "bioset_exit" },
	{ 0xfc15e547, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb1b16ae, "bdevname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x14faf9c9, "sg_miter_stop" },
	{ 0x45fe60a4, "bio_integrity_add_page" },
	{ 0x5d861475, "sg_miter_next" },
	{ 0xa99a349d, "bio_integrity_alloc" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x6f7c9165, "submit_bio" },
	{ 0xb9c2350f, "fs_bio_set" },
	{ 0x923f60fc, "bio_associate_blkg" },
	{ 0xa156bf9, "bio_alloc_bioset" },
	{ 0x37cd8a5e, "target_complete_cmd" },
	{ 0xc12796e8, "bio_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xde280c52, "blkdev_issue_discard" },
	{ 0x29995e93, "target_to_linux_sector" },
	{ 0xa92b0e3c, "sbc_parse_cdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "34CF5FCB076633BF4BD22F2");
