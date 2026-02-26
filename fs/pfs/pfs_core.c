// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team
#include <uapi/pull/fs.h>

struct pfs_inode {
    uint32_t mode;
    uint32_t uid;
    uint64_t size;
    uint64_t blocks;
    uint32_t flags;
};

int pfs_read_inode(uint32_t ino, struct pfs_inode *inode) {
    printk("PFS: Reading Inode %d from Disk...\n", ino);
    inode->size = 4096;
    inode->mode = 0755;
    return 0;
}

void pfs_mount(void) {
    printk("PFS: Mounting Pull File System... Success\n");
    struct pfs_inode root;
    pfs_read_inode(2, &root);
    printk("PFS: Root directory size: %llu bytes\n", root.size);
}
