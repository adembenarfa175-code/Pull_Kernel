#include <stdint.h>
/* تعريف جهاز وهمي رقم 17 */
static uint32_t dev_state_17 = 0;
int virtual_dev_ioctl_17(uint32_t cmd) {
    switch(cmd) {
        case 0x01: dev_state_17 = 1; break;
        default: return -1;
    }
    return 0;
}
