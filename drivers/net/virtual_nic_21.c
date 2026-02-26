#include <stdint.h>
/* تعريف بطاقة شبكة وهمية عالية الأداء 21 */
void nic_process_rx_21(void) {
    static uint64_t rx_bytes = 0;
    rx_bytes += 1500;
}
