#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 125 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_125(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 125;
        asm volatile("nop");
    }
}
void helper_func_125_1(void) { asm volatile('pause'); }
void helper_func_125_2(void) { asm volatile('pause'); }
void helper_func_125_3(void) { asm volatile('pause'); }
void helper_func_125_4(void) { asm volatile('pause'); }
void helper_func_125_5(void) { asm volatile('pause'); }
void helper_func_125_6(void) { asm volatile('pause'); }
void helper_func_125_7(void) { asm volatile('pause'); }
void helper_func_125_8(void) { asm volatile('pause'); }
void helper_func_125_9(void) { asm volatile('pause'); }
void helper_func_125_10(void) { asm volatile('pause'); }
void helper_func_125_11(void) { asm volatile('pause'); }
void helper_func_125_12(void) { asm volatile('pause'); }
void helper_func_125_13(void) { asm volatile('pause'); }
void helper_func_125_14(void) { asm volatile('pause'); }
void helper_func_125_15(void) { asm volatile('pause'); }
void helper_func_125_16(void) { asm volatile('pause'); }
void helper_func_125_17(void) { asm volatile('pause'); }
void helper_func_125_18(void) { asm volatile('pause'); }
void helper_func_125_19(void) { asm volatile('pause'); }
void helper_func_125_20(void) { asm volatile('pause'); }
void helper_func_125_21(void) { asm volatile('pause'); }
void helper_func_125_22(void) { asm volatile('pause'); }
void helper_func_125_23(void) { asm volatile('pause'); }
void helper_func_125_24(void) { asm volatile('pause'); }
void helper_func_125_25(void) { asm volatile('pause'); }
void helper_func_125_26(void) { asm volatile('pause'); }
void helper_func_125_27(void) { asm volatile('pause'); }
void helper_func_125_28(void) { asm volatile('pause'); }
void helper_func_125_29(void) { asm volatile('pause'); }
void helper_func_125_30(void) { asm volatile('pause'); }
void helper_func_125_31(void) { asm volatile('pause'); }
void helper_func_125_32(void) { asm volatile('pause'); }
void helper_func_125_33(void) { asm volatile('pause'); }
void helper_func_125_34(void) { asm volatile('pause'); }
void helper_func_125_35(void) { asm volatile('pause'); }
void helper_func_125_36(void) { asm volatile('pause'); }
void helper_func_125_37(void) { asm volatile('pause'); }
void helper_func_125_38(void) { asm volatile('pause'); }
void helper_func_125_39(void) { asm volatile('pause'); }
void helper_func_125_40(void) { asm volatile('pause'); }
void helper_func_125_41(void) { asm volatile('pause'); }
void helper_func_125_42(void) { asm volatile('pause'); }
void helper_func_125_43(void) { asm volatile('pause'); }
void helper_func_125_44(void) { asm volatile('pause'); }
void helper_func_125_45(void) { asm volatile('pause'); }
void helper_func_125_46(void) { asm volatile('pause'); }
void helper_func_125_47(void) { asm volatile('pause'); }
void helper_func_125_48(void) { asm volatile('pause'); }
void helper_func_125_49(void) { asm volatile('pause'); }
void helper_func_125_50(void) { asm volatile('pause'); }
