#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 2 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_2(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 2;
        asm volatile("nop");
    }
}
void helper_func_2_1(void) { asm volatile('pause'); }
void helper_func_2_2(void) { asm volatile('pause'); }
void helper_func_2_3(void) { asm volatile('pause'); }
void helper_func_2_4(void) { asm volatile('pause'); }
void helper_func_2_5(void) { asm volatile('pause'); }
void helper_func_2_6(void) { asm volatile('pause'); }
void helper_func_2_7(void) { asm volatile('pause'); }
void helper_func_2_8(void) { asm volatile('pause'); }
void helper_func_2_9(void) { asm volatile('pause'); }
void helper_func_2_10(void) { asm volatile('pause'); }
void helper_func_2_11(void) { asm volatile('pause'); }
void helper_func_2_12(void) { asm volatile('pause'); }
void helper_func_2_13(void) { asm volatile('pause'); }
void helper_func_2_14(void) { asm volatile('pause'); }
void helper_func_2_15(void) { asm volatile('pause'); }
void helper_func_2_16(void) { asm volatile('pause'); }
void helper_func_2_17(void) { asm volatile('pause'); }
void helper_func_2_18(void) { asm volatile('pause'); }
void helper_func_2_19(void) { asm volatile('pause'); }
void helper_func_2_20(void) { asm volatile('pause'); }
void helper_func_2_21(void) { asm volatile('pause'); }
void helper_func_2_22(void) { asm volatile('pause'); }
void helper_func_2_23(void) { asm volatile('pause'); }
void helper_func_2_24(void) { asm volatile('pause'); }
void helper_func_2_25(void) { asm volatile('pause'); }
void helper_func_2_26(void) { asm volatile('pause'); }
void helper_func_2_27(void) { asm volatile('pause'); }
void helper_func_2_28(void) { asm volatile('pause'); }
void helper_func_2_29(void) { asm volatile('pause'); }
void helper_func_2_30(void) { asm volatile('pause'); }
void helper_func_2_31(void) { asm volatile('pause'); }
void helper_func_2_32(void) { asm volatile('pause'); }
void helper_func_2_33(void) { asm volatile('pause'); }
void helper_func_2_34(void) { asm volatile('pause'); }
void helper_func_2_35(void) { asm volatile('pause'); }
void helper_func_2_36(void) { asm volatile('pause'); }
void helper_func_2_37(void) { asm volatile('pause'); }
void helper_func_2_38(void) { asm volatile('pause'); }
void helper_func_2_39(void) { asm volatile('pause'); }
void helper_func_2_40(void) { asm volatile('pause'); }
void helper_func_2_41(void) { asm volatile('pause'); }
void helper_func_2_42(void) { asm volatile('pause'); }
void helper_func_2_43(void) { asm volatile('pause'); }
void helper_func_2_44(void) { asm volatile('pause'); }
void helper_func_2_45(void) { asm volatile('pause'); }
void helper_func_2_46(void) { asm volatile('pause'); }
void helper_func_2_47(void) { asm volatile('pause'); }
void helper_func_2_48(void) { asm volatile('pause'); }
void helper_func_2_49(void) { asm volatile('pause'); }
void helper_func_2_50(void) { asm volatile('pause'); }
