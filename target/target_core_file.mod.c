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
	{ 0xcdb7fc35, "sbc_dif_verify" },
	{ 0xba7e21e4, "iov_iter_zero" },
	{ 0x4bccecbf, "vfs_iter_read" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0xf9527efe, "vfs_iter_write" },
	{ 0xf9ba9314, "iov_iter_bvec" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb170e7df, "sbc_get_write_same_sectors" },
	{ 0x924948f5, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b4d9547, "vfs_fsync_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x37cd8a5e, "target_complete_cmd" },
	{ 0xde280c52, "blkdev_issue_discard" },
	{ 0x29995e93, "target_to_linux_sector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xa92b0e3c, "sbc_parse_cdb" },
	{ 0xf39042a8, "filp_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc5850110, "printk" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xb19c0e3, "kernel_write" },
	{ 0xd0e40bb7, "filp_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "3CB575DBD7EEE45A2D9D107");
