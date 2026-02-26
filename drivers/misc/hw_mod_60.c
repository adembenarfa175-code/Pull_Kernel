#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 60 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_60(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 60;
        asm volatile("nop");
    }
}
void helper_func_60_1(void) { asm volatile('pause'); }
void helper_func_60_2(void) { asm volatile('pause'); }
void helper_func_60_3(void) { asm volatile('pause'); }
void helper_func_60_4(void) { asm volatile('pause'); }
void helper_func_60_5(void) { asm volatile('pause'); }
void helper_func_60_6(void) { asm volatile('pause'); }
void helper_func_60_7(void) { asm volatile('pause'); }
void helper_func_60_8(void) { asm volatile('pause'); }
void helper_func_60_9(void) { asm volatile('pause'); }
void helper_func_60_10(void) { asm volatile('pause'); }
void helper_func_60_11(void) { asm volatile('pause'); }
void helper_func_60_12(void) { asm volatile('pause'); }
void helper_func_60_13(void) { asm volatile('pause'); }
void helper_func_60_14(void) { asm volatile('pause'); }
void helper_func_60_15(void) { asm volatile('pause'); }
void helper_func_60_16(void) { asm volatile('pause'); }
void helper_func_60_17(void) { asm volatile('pause'); }
void helper_func_60_18(void) { asm volatile('pause'); }
void helper_func_60_19(void) { asm volatile('pause'); }
void helper_func_60_20(void) { asm volatile('pause'); }
void helper_func_60_21(void) { asm volatile('pause'); }
void helper_func_60_22(void) { asm volatile('pause'); }
void helper_func_60_23(void) { asm volatile('pause'); }
void helper_func_60_24(void) { asm volatile('pause'); }
void helper_func_60_25(void) { asm volatile('pause'); }
void helper_func_60_26(void) { asm volatile('pause'); }
void helper_func_60_27(void) { asm volatile('pause'); }
void helper_func_60_28(void) { asm volatile('pause'); }
void helper_func_60_29(void) { asm volatile('pause'); }
void helper_func_60_30(void) { asm volatile('pause'); }
void helper_func_60_31(void) { asm volatile('pause'); }
void helper_func_60_32(void) { asm volatile('pause'); }
void helper_func_60_33(void) { asm volatile('pause'); }
void helper_func_60_34(void) { asm volatile('pause'); }
void helper_func_60_35(void) { asm volatile('pause'); }
void helper_func_60_36(void) { asm volatile('pause'); }
void helper_func_60_37(void) { asm volatile('pause'); }
void helper_func_60_38(void) { asm volatile('pause'); }
void helper_func_60_39(void) { asm volatile('pause'); }
void helper_func_60_40(void) { asm volatile('pause'); }
void helper_func_60_41(void) { asm volatile('pause'); }
void helper_func_60_42(void) { asm volatile('pause'); }
void helper_func_60_43(void) { asm volatile('pause'); }
void helper_func_60_44(void) { asm volatile('pause'); }
void helper_func_60_45(void) { asm volatile('pause'); }
void helper_func_60_46(void) { asm volatile('pause'); }
void helper_func_60_47(void) { asm volatile('pause'); }
void helper_func_60_48(void) { asm volatile('pause'); }
void helper_func_60_49(void) { asm volatile('pause'); }
void helper_func_60_50(void) { asm volatile('pause'); }
