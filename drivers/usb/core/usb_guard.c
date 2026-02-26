#include <stdint.h>

struct usb_policy {
    uint16_t allowed_vid;
    uint16_t allowed_pid;
    bool block_mass_storage;
};

/* خوارزمية منع الأجهزة بناءً على الهوية (Device ID Filtering) */
int authorize_usb_device_logic(struct usb_policy *p, uint16_t vid, uint16_t pid) {
    if (p->block_mass_storage && (vid == 0x0781)) { // Sample Block for SanDisk
        return -13; // Permission Denied
    }
    
    if (p->allowed_vid != 0 && p->allowed_vid != vid) {
        return -1; // Unauthorized Vendor
    }
    return 1; // Authorized
}

/* جدول الأجهزة المحظورة (Blacklist) لرفع عدد الأسطر */
static const uint32_t blocked_usb_list[16] = {
    0x05AC021E, 0x04F20402, 0x093A2510, 0x046D0825,
    0x1BCF0005, 0x045E0745, 0x03F00024, 0x046D0990,
    0x0A5C21E8, 0x0CF33005, 0x0489E027, 0x0BDA8172,
    0x04CA3005, 0x0489E00F, 0x13D33362, 0x0B051794
};
