#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 40 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_40(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 40;
        asm volatile("nop");
    }
}
void helper_func_40_1(void) { asm volatile('pause'); }
void helper_func_40_2(void) { asm volatile('pause'); }
void helper_func_40_3(void) { asm volatile('pause'); }
void helper_func_40_4(void) { asm volatile('pause'); }
void helper_func_40_5(void) { asm volatile('pause'); }
void helper_func_40_6(void) { asm volatile('pause'); }
void helper_func_40_7(void) { asm volatile('pause'); }
void helper_func_40_8(void) { asm volatile('pause'); }
void helper_func_40_9(void) { asm volatile('pause'); }
void helper_func_40_10(void) { asm volatile('pause'); }
void helper_func_40_11(void) { asm volatile('pause'); }
void helper_func_40_12(void) { asm volatile('pause'); }
void helper_func_40_13(void) { asm volatile('pause'); }
void helper_func_40_14(void) { asm volatile('pause'); }
void helper_func_40_15(void) { asm volatile('pause'); }
void helper_func_40_16(void) { asm volatile('pause'); }
void helper_func_40_17(void) { asm volatile('pause'); }
void helper_func_40_18(void) { asm volatile('pause'); }
void helper_func_40_19(void) { asm volatile('pause'); }
void helper_func_40_20(void) { asm volatile('pause'); }
void helper_func_40_21(void) { asm volatile('pause'); }
void helper_func_40_22(void) { asm volatile('pause'); }
void helper_func_40_23(void) { asm volatile('pause'); }
void helper_func_40_24(void) { asm volatile('pause'); }
void helper_func_40_25(void) { asm volatile('pause'); }
void helper_func_40_26(void) { asm volatile('pause'); }
void helper_func_40_27(void) { asm volatile('pause'); }
void helper_func_40_28(void) { asm volatile('pause'); }
void helper_func_40_29(void) { asm volatile('pause'); }
void helper_func_40_30(void) { asm volatile('pause'); }
void helper_func_40_31(void) { asm volatile('pause'); }
void helper_func_40_32(void) { asm volatile('pause'); }
void helper_func_40_33(void) { asm volatile('pause'); }
void helper_func_40_34(void) { asm volatile('pause'); }
void helper_func_40_35(void) { asm volatile('pause'); }
void helper_func_40_36(void) { asm volatile('pause'); }
void helper_func_40_37(void) { asm volatile('pause'); }
void helper_func_40_38(void) { asm volatile('pause'); }
void helper_func_40_39(void) { asm volatile('pause'); }
void helper_func_40_40(void) { asm volatile('pause'); }
void helper_func_40_41(void) { asm volatile('pause'); }
void helper_func_40_42(void) { asm volatile('pause'); }
void helper_func_40_43(void) { asm volatile('pause'); }
void helper_func_40_44(void) { asm volatile('pause'); }
void helper_func_40_45(void) { asm volatile('pause'); }
void helper_func_40_46(void) { asm volatile('pause'); }
void helper_func_40_47(void) { asm volatile('pause'); }
void helper_func_40_48(void) { asm volatile('pause'); }
void helper_func_40_49(void) { asm volatile('pause'); }
void helper_func_40_50(void) { asm volatile('pause'); }
