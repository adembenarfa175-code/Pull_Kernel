// SPDX-License-Identifier: GPL-2.0-only
struct key { char description[64]; int type; };

void key_instantiate(struct key *k) {
    printk("SECURITY: Key '%s' instantiated in session keyring.\n", k->description);
}

void keys_init(void) {
    printk("SECURITY: Kernel Key Management Service (KMS) online.\n");
}
