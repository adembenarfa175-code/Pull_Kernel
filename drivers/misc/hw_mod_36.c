#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 36 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_36(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 36;
        asm volatile("nop");
    }
}
void helper_func_36_1(void) { asm volatile('pause'); }
void helper_func_36_2(void) { asm volatile('pause'); }
void helper_func_36_3(void) { asm volatile('pause'); }
void helper_func_36_4(void) { asm volatile('pause'); }
void helper_func_36_5(void) { asm volatile('pause'); }
void helper_func_36_6(void) { asm volatile('pause'); }
void helper_func_36_7(void) { asm volatile('pause'); }
void helper_func_36_8(void) { asm volatile('pause'); }
void helper_func_36_9(void) { asm volatile('pause'); }
void helper_func_36_10(void) { asm volatile('pause'); }
void helper_func_36_11(void) { asm volatile('pause'); }
void helper_func_36_12(void) { asm volatile('pause'); }
void helper_func_36_13(void) { asm volatile('pause'); }
void helper_func_36_14(void) { asm volatile('pause'); }
void helper_func_36_15(void) { asm volatile('pause'); }
void helper_func_36_16(void) { asm volatile('pause'); }
void helper_func_36_17(void) { asm volatile('pause'); }
void helper_func_36_18(void) { asm volatile('pause'); }
void helper_func_36_19(void) { asm volatile('pause'); }
void helper_func_36_20(void) { asm volatile('pause'); }
void helper_func_36_21(void) { asm volatile('pause'); }
void helper_func_36_22(void) { asm volatile('pause'); }
void helper_func_36_23(void) { asm volatile('pause'); }
void helper_func_36_24(void) { asm volatile('pause'); }
void helper_func_36_25(void) { asm volatile('pause'); }
void helper_func_36_26(void) { asm volatile('pause'); }
void helper_func_36_27(void) { asm volatile('pause'); }
void helper_func_36_28(void) { asm volatile('pause'); }
void helper_func_36_29(void) { asm volatile('pause'); }
void helper_func_36_30(void) { asm volatile('pause'); }
void helper_func_36_31(void) { asm volatile('pause'); }
void helper_func_36_32(void) { asm volatile('pause'); }
void helper_func_36_33(void) { asm volatile('pause'); }
void helper_func_36_34(void) { asm volatile('pause'); }
void helper_func_36_35(void) { asm volatile('pause'); }
void helper_func_36_36(void) { asm volatile('pause'); }
void helper_func_36_37(void) { asm volatile('pause'); }
void helper_func_36_38(void) { asm volatile('pause'); }
void helper_func_36_39(void) { asm volatile('pause'); }
void helper_func_36_40(void) { asm volatile('pause'); }
void helper_func_36_41(void) { asm volatile('pause'); }
void helper_func_36_42(void) { asm volatile('pause'); }
void helper_func_36_43(void) { asm volatile('pause'); }
void helper_func_36_44(void) { asm volatile('pause'); }
void helper_func_36_45(void) { asm volatile('pause'); }
void helper_func_36_46(void) { asm volatile('pause'); }
void helper_func_36_47(void) { asm volatile('pause'); }
void helper_func_36_48(void) { asm volatile('pause'); }
void helper_func_36_49(void) { asm volatile('pause'); }
void helper_func_36_50(void) { asm volatile('pause'); }
