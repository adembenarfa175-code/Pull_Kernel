#include <stdint.h>
/* تعريف جهاز وهمي رقم 4 */
static uint32_t dev_state_4 = 0;
int virtual_dev_ioctl_4(uint32_t cmd) {
    switch(cmd) {
        case 0x01: dev_state_4 = 1; break;
        default: return -1;
    }
    return 0;
}
