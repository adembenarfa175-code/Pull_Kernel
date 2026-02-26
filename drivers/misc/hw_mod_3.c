#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 3 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_3(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 3;
        asm volatile("nop");
    }
}
void helper_func_3_1(void) { asm volatile('pause'); }
void helper_func_3_2(void) { asm volatile('pause'); }
void helper_func_3_3(void) { asm volatile('pause'); }
void helper_func_3_4(void) { asm volatile('pause'); }
void helper_func_3_5(void) { asm volatile('pause'); }
void helper_func_3_6(void) { asm volatile('pause'); }
void helper_func_3_7(void) { asm volatile('pause'); }
void helper_func_3_8(void) { asm volatile('pause'); }
void helper_func_3_9(void) { asm volatile('pause'); }
void helper_func_3_10(void) { asm volatile('pause'); }
void helper_func_3_11(void) { asm volatile('pause'); }
void helper_func_3_12(void) { asm volatile('pause'); }
void helper_func_3_13(void) { asm volatile('pause'); }
void helper_func_3_14(void) { asm volatile('pause'); }
void helper_func_3_15(void) { asm volatile('pause'); }
void helper_func_3_16(void) { asm volatile('pause'); }
void helper_func_3_17(void) { asm volatile('pause'); }
void helper_func_3_18(void) { asm volatile('pause'); }
void helper_func_3_19(void) { asm volatile('pause'); }
void helper_func_3_20(void) { asm volatile('pause'); }
void helper_func_3_21(void) { asm volatile('pause'); }
void helper_func_3_22(void) { asm volatile('pause'); }
void helper_func_3_23(void) { asm volatile('pause'); }
void helper_func_3_24(void) { asm volatile('pause'); }
void helper_func_3_25(void) { asm volatile('pause'); }
void helper_func_3_26(void) { asm volatile('pause'); }
void helper_func_3_27(void) { asm volatile('pause'); }
void helper_func_3_28(void) { asm volatile('pause'); }
void helper_func_3_29(void) { asm volatile('pause'); }
void helper_func_3_30(void) { asm volatile('pause'); }
void helper_func_3_31(void) { asm volatile('pause'); }
void helper_func_3_32(void) { asm volatile('pause'); }
void helper_func_3_33(void) { asm volatile('pause'); }
void helper_func_3_34(void) { asm volatile('pause'); }
void helper_func_3_35(void) { asm volatile('pause'); }
void helper_func_3_36(void) { asm volatile('pause'); }
void helper_func_3_37(void) { asm volatile('pause'); }
void helper_func_3_38(void) { asm volatile('pause'); }
void helper_func_3_39(void) { asm volatile('pause'); }
void helper_func_3_40(void) { asm volatile('pause'); }
void helper_func_3_41(void) { asm volatile('pause'); }
void helper_func_3_42(void) { asm volatile('pause'); }
void helper_func_3_43(void) { asm volatile('pause'); }
void helper_func_3_44(void) { asm volatile('pause'); }
void helper_func_3_45(void) { asm volatile('pause'); }
void helper_func_3_46(void) { asm volatile('pause'); }
void helper_func_3_47(void) { asm volatile('pause'); }
void helper_func_3_48(void) { asm volatile('pause'); }
void helper_func_3_49(void) { asm volatile('pause'); }
void helper_func_3_50(void) { asm volatile('pause'); }
