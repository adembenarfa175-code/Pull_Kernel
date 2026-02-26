#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 105 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_105(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 105;
        asm volatile("nop");
    }
}
void helper_func_105_1(void) { asm volatile('pause'); }
void helper_func_105_2(void) { asm volatile('pause'); }
void helper_func_105_3(void) { asm volatile('pause'); }
void helper_func_105_4(void) { asm volatile('pause'); }
void helper_func_105_5(void) { asm volatile('pause'); }
void helper_func_105_6(void) { asm volatile('pause'); }
void helper_func_105_7(void) { asm volatile('pause'); }
void helper_func_105_8(void) { asm volatile('pause'); }
void helper_func_105_9(void) { asm volatile('pause'); }
void helper_func_105_10(void) { asm volatile('pause'); }
void helper_func_105_11(void) { asm volatile('pause'); }
void helper_func_105_12(void) { asm volatile('pause'); }
void helper_func_105_13(void) { asm volatile('pause'); }
void helper_func_105_14(void) { asm volatile('pause'); }
void helper_func_105_15(void) { asm volatile('pause'); }
void helper_func_105_16(void) { asm volatile('pause'); }
void helper_func_105_17(void) { asm volatile('pause'); }
void helper_func_105_18(void) { asm volatile('pause'); }
void helper_func_105_19(void) { asm volatile('pause'); }
void helper_func_105_20(void) { asm volatile('pause'); }
void helper_func_105_21(void) { asm volatile('pause'); }
void helper_func_105_22(void) { asm volatile('pause'); }
void helper_func_105_23(void) { asm volatile('pause'); }
void helper_func_105_24(void) { asm volatile('pause'); }
void helper_func_105_25(void) { asm volatile('pause'); }
void helper_func_105_26(void) { asm volatile('pause'); }
void helper_func_105_27(void) { asm volatile('pause'); }
void helper_func_105_28(void) { asm volatile('pause'); }
void helper_func_105_29(void) { asm volatile('pause'); }
void helper_func_105_30(void) { asm volatile('pause'); }
void helper_func_105_31(void) { asm volatile('pause'); }
void helper_func_105_32(void) { asm volatile('pause'); }
void helper_func_105_33(void) { asm volatile('pause'); }
void helper_func_105_34(void) { asm volatile('pause'); }
void helper_func_105_35(void) { asm volatile('pause'); }
void helper_func_105_36(void) { asm volatile('pause'); }
void helper_func_105_37(void) { asm volatile('pause'); }
void helper_func_105_38(void) { asm volatile('pause'); }
void helper_func_105_39(void) { asm volatile('pause'); }
void helper_func_105_40(void) { asm volatile('pause'); }
void helper_func_105_41(void) { asm volatile('pause'); }
void helper_func_105_42(void) { asm volatile('pause'); }
void helper_func_105_43(void) { asm volatile('pause'); }
void helper_func_105_44(void) { asm volatile('pause'); }
void helper_func_105_45(void) { asm volatile('pause'); }
void helper_func_105_46(void) { asm volatile('pause'); }
void helper_func_105_47(void) { asm volatile('pause'); }
void helper_func_105_48(void) { asm volatile('pause'); }
void helper_func_105_49(void) { asm volatile('pause'); }
void helper_func_105_50(void) { asm volatile('pause'); }
