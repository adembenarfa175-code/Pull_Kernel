#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 80 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_80(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 80;
        asm volatile("nop");
    }
}
void helper_func_80_1(void) { asm volatile('pause'); }
void helper_func_80_2(void) { asm volatile('pause'); }
void helper_func_80_3(void) { asm volatile('pause'); }
void helper_func_80_4(void) { asm volatile('pause'); }
void helper_func_80_5(void) { asm volatile('pause'); }
void helper_func_80_6(void) { asm volatile('pause'); }
void helper_func_80_7(void) { asm volatile('pause'); }
void helper_func_80_8(void) { asm volatile('pause'); }
void helper_func_80_9(void) { asm volatile('pause'); }
void helper_func_80_10(void) { asm volatile('pause'); }
void helper_func_80_11(void) { asm volatile('pause'); }
void helper_func_80_12(void) { asm volatile('pause'); }
void helper_func_80_13(void) { asm volatile('pause'); }
void helper_func_80_14(void) { asm volatile('pause'); }
void helper_func_80_15(void) { asm volatile('pause'); }
void helper_func_80_16(void) { asm volatile('pause'); }
void helper_func_80_17(void) { asm volatile('pause'); }
void helper_func_80_18(void) { asm volatile('pause'); }
void helper_func_80_19(void) { asm volatile('pause'); }
void helper_func_80_20(void) { asm volatile('pause'); }
void helper_func_80_21(void) { asm volatile('pause'); }
void helper_func_80_22(void) { asm volatile('pause'); }
void helper_func_80_23(void) { asm volatile('pause'); }
void helper_func_80_24(void) { asm volatile('pause'); }
void helper_func_80_25(void) { asm volatile('pause'); }
void helper_func_80_26(void) { asm volatile('pause'); }
void helper_func_80_27(void) { asm volatile('pause'); }
void helper_func_80_28(void) { asm volatile('pause'); }
void helper_func_80_29(void) { asm volatile('pause'); }
void helper_func_80_30(void) { asm volatile('pause'); }
void helper_func_80_31(void) { asm volatile('pause'); }
void helper_func_80_32(void) { asm volatile('pause'); }
void helper_func_80_33(void) { asm volatile('pause'); }
void helper_func_80_34(void) { asm volatile('pause'); }
void helper_func_80_35(void) { asm volatile('pause'); }
void helper_func_80_36(void) { asm volatile('pause'); }
void helper_func_80_37(void) { asm volatile('pause'); }
void helper_func_80_38(void) { asm volatile('pause'); }
void helper_func_80_39(void) { asm volatile('pause'); }
void helper_func_80_40(void) { asm volatile('pause'); }
void helper_func_80_41(void) { asm volatile('pause'); }
void helper_func_80_42(void) { asm volatile('pause'); }
void helper_func_80_43(void) { asm volatile('pause'); }
void helper_func_80_44(void) { asm volatile('pause'); }
void helper_func_80_45(void) { asm volatile('pause'); }
void helper_func_80_46(void) { asm volatile('pause'); }
void helper_func_80_47(void) { asm volatile('pause'); }
void helper_func_80_48(void) { asm volatile('pause'); }
void helper_func_80_49(void) { asm volatile('pause'); }
void helper_func_80_50(void) { asm volatile('pause'); }
