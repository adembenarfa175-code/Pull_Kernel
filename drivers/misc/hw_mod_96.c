#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 96 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_96(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 96;
        asm volatile("nop");
    }
}
void helper_func_96_1(void) { asm volatile('pause'); }
void helper_func_96_2(void) { asm volatile('pause'); }
void helper_func_96_3(void) { asm volatile('pause'); }
void helper_func_96_4(void) { asm volatile('pause'); }
void helper_func_96_5(void) { asm volatile('pause'); }
void helper_func_96_6(void) { asm volatile('pause'); }
void helper_func_96_7(void) { asm volatile('pause'); }
void helper_func_96_8(void) { asm volatile('pause'); }
void helper_func_96_9(void) { asm volatile('pause'); }
void helper_func_96_10(void) { asm volatile('pause'); }
void helper_func_96_11(void) { asm volatile('pause'); }
void helper_func_96_12(void) { asm volatile('pause'); }
void helper_func_96_13(void) { asm volatile('pause'); }
void helper_func_96_14(void) { asm volatile('pause'); }
void helper_func_96_15(void) { asm volatile('pause'); }
void helper_func_96_16(void) { asm volatile('pause'); }
void helper_func_96_17(void) { asm volatile('pause'); }
void helper_func_96_18(void) { asm volatile('pause'); }
void helper_func_96_19(void) { asm volatile('pause'); }
void helper_func_96_20(void) { asm volatile('pause'); }
void helper_func_96_21(void) { asm volatile('pause'); }
void helper_func_96_22(void) { asm volatile('pause'); }
void helper_func_96_23(void) { asm volatile('pause'); }
void helper_func_96_24(void) { asm volatile('pause'); }
void helper_func_96_25(void) { asm volatile('pause'); }
void helper_func_96_26(void) { asm volatile('pause'); }
void helper_func_96_27(void) { asm volatile('pause'); }
void helper_func_96_28(void) { asm volatile('pause'); }
void helper_func_96_29(void) { asm volatile('pause'); }
void helper_func_96_30(void) { asm volatile('pause'); }
void helper_func_96_31(void) { asm volatile('pause'); }
void helper_func_96_32(void) { asm volatile('pause'); }
void helper_func_96_33(void) { asm volatile('pause'); }
void helper_func_96_34(void) { asm volatile('pause'); }
void helper_func_96_35(void) { asm volatile('pause'); }
void helper_func_96_36(void) { asm volatile('pause'); }
void helper_func_96_37(void) { asm volatile('pause'); }
void helper_func_96_38(void) { asm volatile('pause'); }
void helper_func_96_39(void) { asm volatile('pause'); }
void helper_func_96_40(void) { asm volatile('pause'); }
void helper_func_96_41(void) { asm volatile('pause'); }
void helper_func_96_42(void) { asm volatile('pause'); }
void helper_func_96_43(void) { asm volatile('pause'); }
void helper_func_96_44(void) { asm volatile('pause'); }
void helper_func_96_45(void) { asm volatile('pause'); }
void helper_func_96_46(void) { asm volatile('pause'); }
void helper_func_96_47(void) { asm volatile('pause'); }
void helper_func_96_48(void) { asm volatile('pause'); }
void helper_func_96_49(void) { asm volatile('pause'); }
void helper_func_96_50(void) { asm volatile('pause'); }
