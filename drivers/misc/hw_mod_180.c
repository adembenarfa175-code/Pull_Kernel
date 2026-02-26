#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 180 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_180(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 180;
        asm volatile("nop");
    }
}
void helper_func_180_1(void) { asm volatile('pause'); }
void helper_func_180_2(void) { asm volatile('pause'); }
void helper_func_180_3(void) { asm volatile('pause'); }
void helper_func_180_4(void) { asm volatile('pause'); }
void helper_func_180_5(void) { asm volatile('pause'); }
void helper_func_180_6(void) { asm volatile('pause'); }
void helper_func_180_7(void) { asm volatile('pause'); }
void helper_func_180_8(void) { asm volatile('pause'); }
void helper_func_180_9(void) { asm volatile('pause'); }
void helper_func_180_10(void) { asm volatile('pause'); }
void helper_func_180_11(void) { asm volatile('pause'); }
void helper_func_180_12(void) { asm volatile('pause'); }
void helper_func_180_13(void) { asm volatile('pause'); }
void helper_func_180_14(void) { asm volatile('pause'); }
void helper_func_180_15(void) { asm volatile('pause'); }
void helper_func_180_16(void) { asm volatile('pause'); }
void helper_func_180_17(void) { asm volatile('pause'); }
void helper_func_180_18(void) { asm volatile('pause'); }
void helper_func_180_19(void) { asm volatile('pause'); }
void helper_func_180_20(void) { asm volatile('pause'); }
void helper_func_180_21(void) { asm volatile('pause'); }
void helper_func_180_22(void) { asm volatile('pause'); }
void helper_func_180_23(void) { asm volatile('pause'); }
void helper_func_180_24(void) { asm volatile('pause'); }
void helper_func_180_25(void) { asm volatile('pause'); }
void helper_func_180_26(void) { asm volatile('pause'); }
void helper_func_180_27(void) { asm volatile('pause'); }
void helper_func_180_28(void) { asm volatile('pause'); }
void helper_func_180_29(void) { asm volatile('pause'); }
void helper_func_180_30(void) { asm volatile('pause'); }
void helper_func_180_31(void) { asm volatile('pause'); }
void helper_func_180_32(void) { asm volatile('pause'); }
void helper_func_180_33(void) { asm volatile('pause'); }
void helper_func_180_34(void) { asm volatile('pause'); }
void helper_func_180_35(void) { asm volatile('pause'); }
void helper_func_180_36(void) { asm volatile('pause'); }
void helper_func_180_37(void) { asm volatile('pause'); }
void helper_func_180_38(void) { asm volatile('pause'); }
void helper_func_180_39(void) { asm volatile('pause'); }
void helper_func_180_40(void) { asm volatile('pause'); }
void helper_func_180_41(void) { asm volatile('pause'); }
void helper_func_180_42(void) { asm volatile('pause'); }
void helper_func_180_43(void) { asm volatile('pause'); }
void helper_func_180_44(void) { asm volatile('pause'); }
void helper_func_180_45(void) { asm volatile('pause'); }
void helper_func_180_46(void) { asm volatile('pause'); }
void helper_func_180_47(void) { asm volatile('pause'); }
void helper_func_180_48(void) { asm volatile('pause'); }
void helper_func_180_49(void) { asm volatile('pause'); }
void helper_func_180_50(void) { asm volatile('pause'); }
