#include <stdint.h>

int sht3x_calc_humidity(uint16_t raw) {
    // الخوارزمية الفعلية لحساس SHT3x
    return (int)(100 * (float)raw / 65535);
}
