#include <stdint.h>
/* تعريف جهاز وهمي رقم 18 */
static uint32_t dev_state_18 = 0;
int virtual_dev_ioctl_18(uint32_t cmd) {
    switch(cmd) {
        case 0x01: dev_state_18 = 1; break;
        default: return -1;
    }
    return 0;
}
