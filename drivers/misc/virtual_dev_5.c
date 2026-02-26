#include <stdint.h>
/* تعريف جهاز وهمي رقم 5 */
static uint32_t dev_state_5 = 0;
int virtual_dev_ioctl_5(uint32_t cmd) {
    switch(cmd) {
        case 0x01: dev_state_5 = 1; break;
        default: return -1;
    }
    return 0;
}
