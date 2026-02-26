// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team
struct touch_data {
    int id;
    int x, y;
    bool pressed;
};

void handle_touch_interrupt(struct touch_data *data) {
    if (data->pressed) {
        printk("INPUT: Touch Down at X:%d Y:%d (ID: %d)\n", data->x, data->y, data->id);
    }
}

void touch_init(void) {
    printk("INPUT: Multi-touch Digitizer Driver Online\n");
}
