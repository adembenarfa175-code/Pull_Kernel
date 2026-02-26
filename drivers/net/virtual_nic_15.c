#include <stdint.h>
/* تعريف بطاقة شبكة وهمية عالية الأداء 15 */
void nic_process_rx_15(void) {
    static uint64_t rx_bytes = 0;
    rx_bytes += 1500;
}
