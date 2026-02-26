#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 64 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_64(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 64;
        asm volatile("nop");
    }
}
void helper_func_64_1(void) { asm volatile('pause'); }
void helper_func_64_2(void) { asm volatile('pause'); }
void helper_func_64_3(void) { asm volatile('pause'); }
void helper_func_64_4(void) { asm volatile('pause'); }
void helper_func_64_5(void) { asm volatile('pause'); }
void helper_func_64_6(void) { asm volatile('pause'); }
void helper_func_64_7(void) { asm volatile('pause'); }
void helper_func_64_8(void) { asm volatile('pause'); }
void helper_func_64_9(void) { asm volatile('pause'); }
void helper_func_64_10(void) { asm volatile('pause'); }
void helper_func_64_11(void) { asm volatile('pause'); }
void helper_func_64_12(void) { asm volatile('pause'); }
void helper_func_64_13(void) { asm volatile('pause'); }
void helper_func_64_14(void) { asm volatile('pause'); }
void helper_func_64_15(void) { asm volatile('pause'); }
void helper_func_64_16(void) { asm volatile('pause'); }
void helper_func_64_17(void) { asm volatile('pause'); }
void helper_func_64_18(void) { asm volatile('pause'); }
void helper_func_64_19(void) { asm volatile('pause'); }
void helper_func_64_20(void) { asm volatile('pause'); }
void helper_func_64_21(void) { asm volatile('pause'); }
void helper_func_64_22(void) { asm volatile('pause'); }
void helper_func_64_23(void) { asm volatile('pause'); }
void helper_func_64_24(void) { asm volatile('pause'); }
void helper_func_64_25(void) { asm volatile('pause'); }
void helper_func_64_26(void) { asm volatile('pause'); }
void helper_func_64_27(void) { asm volatile('pause'); }
void helper_func_64_28(void) { asm volatile('pause'); }
void helper_func_64_29(void) { asm volatile('pause'); }
void helper_func_64_30(void) { asm volatile('pause'); }
void helper_func_64_31(void) { asm volatile('pause'); }
void helper_func_64_32(void) { asm volatile('pause'); }
void helper_func_64_33(void) { asm volatile('pause'); }
void helper_func_64_34(void) { asm volatile('pause'); }
void helper_func_64_35(void) { asm volatile('pause'); }
void helper_func_64_36(void) { asm volatile('pause'); }
void helper_func_64_37(void) { asm volatile('pause'); }
void helper_func_64_38(void) { asm volatile('pause'); }
void helper_func_64_39(void) { asm volatile('pause'); }
void helper_func_64_40(void) { asm volatile('pause'); }
void helper_func_64_41(void) { asm volatile('pause'); }
void helper_func_64_42(void) { asm volatile('pause'); }
void helper_func_64_43(void) { asm volatile('pause'); }
void helper_func_64_44(void) { asm volatile('pause'); }
void helper_func_64_45(void) { asm volatile('pause'); }
void helper_func_64_46(void) { asm volatile('pause'); }
void helper_func_64_47(void) { asm volatile('pause'); }
void helper_func_64_48(void) { asm volatile('pause'); }
void helper_func_64_49(void) { asm volatile('pause'); }
void helper_func_64_50(void) { asm volatile('pause'); }
