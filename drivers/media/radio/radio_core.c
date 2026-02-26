// SPDX-License-Identifier: GPL-2.0-only
// Kernel FM Radio Subsystem
struct radio_dev {
    uint32_t frequency_khz;
    bool stereo;
    int signal_strength;
};

void tune_radio(struct radio_dev *r, uint32_t freq) {
    r->frequency_khz = freq;
    printk("MEDIA: Tuning FM Radio to %d.%d MHz\n", freq/1000, (freq%1000)/100);
}

void radio_init(void) {
    printk("MEDIA: Radio V4L2 Subsystem active.\n");
}
