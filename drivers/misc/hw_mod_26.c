#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 26 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_26(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 26;
        asm volatile("nop");
    }
}
void helper_func_26_1(void) { asm volatile('pause'); }
void helper_func_26_2(void) { asm volatile('pause'); }
void helper_func_26_3(void) { asm volatile('pause'); }
void helper_func_26_4(void) { asm volatile('pause'); }
void helper_func_26_5(void) { asm volatile('pause'); }
void helper_func_26_6(void) { asm volatile('pause'); }
void helper_func_26_7(void) { asm volatile('pause'); }
void helper_func_26_8(void) { asm volatile('pause'); }
void helper_func_26_9(void) { asm volatile('pause'); }
void helper_func_26_10(void) { asm volatile('pause'); }
void helper_func_26_11(void) { asm volatile('pause'); }
void helper_func_26_12(void) { asm volatile('pause'); }
void helper_func_26_13(void) { asm volatile('pause'); }
void helper_func_26_14(void) { asm volatile('pause'); }
void helper_func_26_15(void) { asm volatile('pause'); }
void helper_func_26_16(void) { asm volatile('pause'); }
void helper_func_26_17(void) { asm volatile('pause'); }
void helper_func_26_18(void) { asm volatile('pause'); }
void helper_func_26_19(void) { asm volatile('pause'); }
void helper_func_26_20(void) { asm volatile('pause'); }
void helper_func_26_21(void) { asm volatile('pause'); }
void helper_func_26_22(void) { asm volatile('pause'); }
void helper_func_26_23(void) { asm volatile('pause'); }
void helper_func_26_24(void) { asm volatile('pause'); }
void helper_func_26_25(void) { asm volatile('pause'); }
void helper_func_26_26(void) { asm volatile('pause'); }
void helper_func_26_27(void) { asm volatile('pause'); }
void helper_func_26_28(void) { asm volatile('pause'); }
void helper_func_26_29(void) { asm volatile('pause'); }
void helper_func_26_30(void) { asm volatile('pause'); }
void helper_func_26_31(void) { asm volatile('pause'); }
void helper_func_26_32(void) { asm volatile('pause'); }
void helper_func_26_33(void) { asm volatile('pause'); }
void helper_func_26_34(void) { asm volatile('pause'); }
void helper_func_26_35(void) { asm volatile('pause'); }
void helper_func_26_36(void) { asm volatile('pause'); }
void helper_func_26_37(void) { asm volatile('pause'); }
void helper_func_26_38(void) { asm volatile('pause'); }
void helper_func_26_39(void) { asm volatile('pause'); }
void helper_func_26_40(void) { asm volatile('pause'); }
void helper_func_26_41(void) { asm volatile('pause'); }
void helper_func_26_42(void) { asm volatile('pause'); }
void helper_func_26_43(void) { asm volatile('pause'); }
void helper_func_26_44(void) { asm volatile('pause'); }
void helper_func_26_45(void) { asm volatile('pause'); }
void helper_func_26_46(void) { asm volatile('pause'); }
void helper_func_26_47(void) { asm volatile('pause'); }
void helper_func_26_48(void) { asm volatile('pause'); }
void helper_func_26_49(void) { asm volatile('pause'); }
void helper_func_26_50(void) { asm volatile('pause'); }
