// SPDX-License-Identifier: GPL-2.0-only
struct unix_sock { int fd; char path[108]; };

int unix_create_socket(struct unix_sock *sk) {
    printk("NET: Creating Unix Domain Socket at %s\n", sk->path);
    return 0;
}

void af_unix_init(void) {
    printk("NET: AF_UNIX protocol family registered.\n");
}
