#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 8 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_8(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 8;
        asm volatile("nop");
    }
}
void helper_func_8_1(void) { asm volatile('pause'); }
void helper_func_8_2(void) { asm volatile('pause'); }
void helper_func_8_3(void) { asm volatile('pause'); }
void helper_func_8_4(void) { asm volatile('pause'); }
void helper_func_8_5(void) { asm volatile('pause'); }
void helper_func_8_6(void) { asm volatile('pause'); }
void helper_func_8_7(void) { asm volatile('pause'); }
void helper_func_8_8(void) { asm volatile('pause'); }
void helper_func_8_9(void) { asm volatile('pause'); }
void helper_func_8_10(void) { asm volatile('pause'); }
void helper_func_8_11(void) { asm volatile('pause'); }
void helper_func_8_12(void) { asm volatile('pause'); }
void helper_func_8_13(void) { asm volatile('pause'); }
void helper_func_8_14(void) { asm volatile('pause'); }
void helper_func_8_15(void) { asm volatile('pause'); }
void helper_func_8_16(void) { asm volatile('pause'); }
void helper_func_8_17(void) { asm volatile('pause'); }
void helper_func_8_18(void) { asm volatile('pause'); }
void helper_func_8_19(void) { asm volatile('pause'); }
void helper_func_8_20(void) { asm volatile('pause'); }
void helper_func_8_21(void) { asm volatile('pause'); }
void helper_func_8_22(void) { asm volatile('pause'); }
void helper_func_8_23(void) { asm volatile('pause'); }
void helper_func_8_24(void) { asm volatile('pause'); }
void helper_func_8_25(void) { asm volatile('pause'); }
void helper_func_8_26(void) { asm volatile('pause'); }
void helper_func_8_27(void) { asm volatile('pause'); }
void helper_func_8_28(void) { asm volatile('pause'); }
void helper_func_8_29(void) { asm volatile('pause'); }
void helper_func_8_30(void) { asm volatile('pause'); }
void helper_func_8_31(void) { asm volatile('pause'); }
void helper_func_8_32(void) { asm volatile('pause'); }
void helper_func_8_33(void) { asm volatile('pause'); }
void helper_func_8_34(void) { asm volatile('pause'); }
void helper_func_8_35(void) { asm volatile('pause'); }
void helper_func_8_36(void) { asm volatile('pause'); }
void helper_func_8_37(void) { asm volatile('pause'); }
void helper_func_8_38(void) { asm volatile('pause'); }
void helper_func_8_39(void) { asm volatile('pause'); }
void helper_func_8_40(void) { asm volatile('pause'); }
void helper_func_8_41(void) { asm volatile('pause'); }
void helper_func_8_42(void) { asm volatile('pause'); }
void helper_func_8_43(void) { asm volatile('pause'); }
void helper_func_8_44(void) { asm volatile('pause'); }
void helper_func_8_45(void) { asm volatile('pause'); }
void helper_func_8_46(void) { asm volatile('pause'); }
void helper_func_8_47(void) { asm volatile('pause'); }
void helper_func_8_48(void) { asm volatile('pause'); }
void helper_func_8_49(void) { asm volatile('pause'); }
void helper_func_8_50(void) { asm volatile('pause'); }
