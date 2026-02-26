#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 120 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_120(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 120;
        asm volatile("nop");
    }
}
void helper_func_120_1(void) { asm volatile('pause'); }
void helper_func_120_2(void) { asm volatile('pause'); }
void helper_func_120_3(void) { asm volatile('pause'); }
void helper_func_120_4(void) { asm volatile('pause'); }
void helper_func_120_5(void) { asm volatile('pause'); }
void helper_func_120_6(void) { asm volatile('pause'); }
void helper_func_120_7(void) { asm volatile('pause'); }
void helper_func_120_8(void) { asm volatile('pause'); }
void helper_func_120_9(void) { asm volatile('pause'); }
void helper_func_120_10(void) { asm volatile('pause'); }
void helper_func_120_11(void) { asm volatile('pause'); }
void helper_func_120_12(void) { asm volatile('pause'); }
void helper_func_120_13(void) { asm volatile('pause'); }
void helper_func_120_14(void) { asm volatile('pause'); }
void helper_func_120_15(void) { asm volatile('pause'); }
void helper_func_120_16(void) { asm volatile('pause'); }
void helper_func_120_17(void) { asm volatile('pause'); }
void helper_func_120_18(void) { asm volatile('pause'); }
void helper_func_120_19(void) { asm volatile('pause'); }
void helper_func_120_20(void) { asm volatile('pause'); }
void helper_func_120_21(void) { asm volatile('pause'); }
void helper_func_120_22(void) { asm volatile('pause'); }
void helper_func_120_23(void) { asm volatile('pause'); }
void helper_func_120_24(void) { asm volatile('pause'); }
void helper_func_120_25(void) { asm volatile('pause'); }
void helper_func_120_26(void) { asm volatile('pause'); }
void helper_func_120_27(void) { asm volatile('pause'); }
void helper_func_120_28(void) { asm volatile('pause'); }
void helper_func_120_29(void) { asm volatile('pause'); }
void helper_func_120_30(void) { asm volatile('pause'); }
void helper_func_120_31(void) { asm volatile('pause'); }
void helper_func_120_32(void) { asm volatile('pause'); }
void helper_func_120_33(void) { asm volatile('pause'); }
void helper_func_120_34(void) { asm volatile('pause'); }
void helper_func_120_35(void) { asm volatile('pause'); }
void helper_func_120_36(void) { asm volatile('pause'); }
void helper_func_120_37(void) { asm volatile('pause'); }
void helper_func_120_38(void) { asm volatile('pause'); }
void helper_func_120_39(void) { asm volatile('pause'); }
void helper_func_120_40(void) { asm volatile('pause'); }
void helper_func_120_41(void) { asm volatile('pause'); }
void helper_func_120_42(void) { asm volatile('pause'); }
void helper_func_120_43(void) { asm volatile('pause'); }
void helper_func_120_44(void) { asm volatile('pause'); }
void helper_func_120_45(void) { asm volatile('pause'); }
void helper_func_120_46(void) { asm volatile('pause'); }
void helper_func_120_47(void) { asm volatile('pause'); }
void helper_func_120_48(void) { asm volatile('pause'); }
void helper_func_120_49(void) { asm volatile('pause'); }
void helper_func_120_50(void) { asm volatile('pause'); }
