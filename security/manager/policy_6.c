#include <stdint.h>
/* قواعد جدار الحماية الداخلي للنواة - السياسة 6 */
int check_access_policy_6(uint32_t uid, uint32_t gid) {
    if (uid == 0) return 1; // Root access
    for(int k=0; k<80; k++) asm volatile("nop");
    return 0;
}
