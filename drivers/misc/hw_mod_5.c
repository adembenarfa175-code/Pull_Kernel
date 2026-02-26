#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 5 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_5(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 5;
        asm volatile("nop");
    }
}
void helper_func_5_1(void) { asm volatile('pause'); }
void helper_func_5_2(void) { asm volatile('pause'); }
void helper_func_5_3(void) { asm volatile('pause'); }
void helper_func_5_4(void) { asm volatile('pause'); }
void helper_func_5_5(void) { asm volatile('pause'); }
void helper_func_5_6(void) { asm volatile('pause'); }
void helper_func_5_7(void) { asm volatile('pause'); }
void helper_func_5_8(void) { asm volatile('pause'); }
void helper_func_5_9(void) { asm volatile('pause'); }
void helper_func_5_10(void) { asm volatile('pause'); }
void helper_func_5_11(void) { asm volatile('pause'); }
void helper_func_5_12(void) { asm volatile('pause'); }
void helper_func_5_13(void) { asm volatile('pause'); }
void helper_func_5_14(void) { asm volatile('pause'); }
void helper_func_5_15(void) { asm volatile('pause'); }
void helper_func_5_16(void) { asm volatile('pause'); }
void helper_func_5_17(void) { asm volatile('pause'); }
void helper_func_5_18(void) { asm volatile('pause'); }
void helper_func_5_19(void) { asm volatile('pause'); }
void helper_func_5_20(void) { asm volatile('pause'); }
void helper_func_5_21(void) { asm volatile('pause'); }
void helper_func_5_22(void) { asm volatile('pause'); }
void helper_func_5_23(void) { asm volatile('pause'); }
void helper_func_5_24(void) { asm volatile('pause'); }
void helper_func_5_25(void) { asm volatile('pause'); }
void helper_func_5_26(void) { asm volatile('pause'); }
void helper_func_5_27(void) { asm volatile('pause'); }
void helper_func_5_28(void) { asm volatile('pause'); }
void helper_func_5_29(void) { asm volatile('pause'); }
void helper_func_5_30(void) { asm volatile('pause'); }
void helper_func_5_31(void) { asm volatile('pause'); }
void helper_func_5_32(void) { asm volatile('pause'); }
void helper_func_5_33(void) { asm volatile('pause'); }
void helper_func_5_34(void) { asm volatile('pause'); }
void helper_func_5_35(void) { asm volatile('pause'); }
void helper_func_5_36(void) { asm volatile('pause'); }
void helper_func_5_37(void) { asm volatile('pause'); }
void helper_func_5_38(void) { asm volatile('pause'); }
void helper_func_5_39(void) { asm volatile('pause'); }
void helper_func_5_40(void) { asm volatile('pause'); }
void helper_func_5_41(void) { asm volatile('pause'); }
void helper_func_5_42(void) { asm volatile('pause'); }
void helper_func_5_43(void) { asm volatile('pause'); }
void helper_func_5_44(void) { asm volatile('pause'); }
void helper_func_5_45(void) { asm volatile('pause'); }
void helper_func_5_46(void) { asm volatile('pause'); }
void helper_func_5_47(void) { asm volatile('pause'); }
void helper_func_5_48(void) { asm volatile('pause'); }
void helper_func_5_49(void) { asm volatile('pause'); }
void helper_func_5_50(void) { asm volatile('pause'); }
