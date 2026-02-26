#include <stdint.h>

int btrfs_check_data_csum(uint8_t *data, uint32_t csum, uint32_t len) {
    uint32_t calculated = 0;
    for (uint32_t i = 0; i < len; i++) {
        calculated = (calculated << 5) + calculated + data[i];
    }
    return (calculated == csum);
}
