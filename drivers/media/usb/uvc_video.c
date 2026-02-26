#include <stdint.h>

struct usb_desc { uint8_t bLength; uint8_t bDescriptorType; uint16_t bcdUSB; };

int usb_parse_base(struct usb_desc *d, uint8_t type) {
    if (d->bLength < 3) return -1;
    if (d->bDescriptorType != type) return -1;
    return 0;
}
