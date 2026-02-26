// SPDX-License-Identifier: GPL-2.0-only
struct pm_state_desc { int state_id; const char *name; uint32_t latency_us; };

void pm_change_state(struct pm_state_desc *state) {
    printk("PM-CORE: Switching to %s (ID: %d, Resume Latency: %d us)\n", 
           state->name, state->id, state->latency_us);
}

void pm_init(void) {
    struct pm_state_desc s1 = { .state_id = 3, .name = "Deep Sleep (S3)", .latency_us = 5000 };
    printk("PM-CORE: Power Governor 'Balanced' Active.\n");
    pm_change_state(&s1);
}
