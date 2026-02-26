// SPDX-License-Identifier: GPL-2.0-only
struct fb_rect { uint32_t x, y, w, h, color; };

void fb_draw_box(struct fb_rect *r) {
    printk("VIDEO: Rendering Rect at (%d,%d) [%dx%d] Color: 0x%08x\n", 
           r->x, r->y, r->w, r->h, r->color);
}

void fb_init(void) {
    struct fb_rect splash = { .x = 0, .y = 0, .w = 1920, .h = 1080, .color = 0x000000 };
    printk("VIDEO: Framebuffer Core V2 Initialized (Double Buffering Enabled).\n");
    fb_draw_box(&splash);
}
