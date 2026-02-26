#include <stdint.h>
/* تعريف جهاز وهمي رقم 13 */
static uint32_t dev_state_13 = 0;
int virtual_dev_ioctl_13(uint32_t cmd) {
    switch(cmd) {
        case 0x01: dev_state_13 = 1; break;
        default: return -1;
    }
    return 0;
}
