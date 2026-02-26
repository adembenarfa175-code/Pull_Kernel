// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/fs.h>
#include <pull/module.h>

/* هذا الملف سيربط المكتبة الجاهزة بواجهة الـ VFS في نواتك */
static struct file_system_type btrfs_fs_type = {
    .name     = "btrfs",
    .mount    = btrfs_mount,
    .kill_sb  = btrfs_kill_sb,
};

static int __init init_btrfs_fs(void) {
    return register_filesystem(&btrfs_fs_type);
}

module_init(init_btrfs_fs);
