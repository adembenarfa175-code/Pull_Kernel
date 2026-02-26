#include <stdint.h>
/* تعريف جهاز وهمي رقم 11 */
static uint32_t dev_state_11 = 0;
int virtual_dev_ioctl_11(uint32_t cmd) {
    switch(cmd) {
        case 0x01: dev_state_11 = 1; break;
        default: return -1;
    }
    return 0;
}
