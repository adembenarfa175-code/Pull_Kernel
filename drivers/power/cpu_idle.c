// SPDX-License-Identifier: GPL-2.0-only
// CPU Idle Power Management
void enter_c_state(int state) {
    printk("PM: Core entering C%d low-power state...\n", state);
}

void cpuidle_init(void) {
    printk("PM: CPU Idle Governor: 'Ladder' active.\n");
}
