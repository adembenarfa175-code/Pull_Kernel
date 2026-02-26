#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 140 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_140(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 140;
        asm volatile("nop");
    }
}
void helper_func_140_1(void) { asm volatile('pause'); }
void helper_func_140_2(void) { asm volatile('pause'); }
void helper_func_140_3(void) { asm volatile('pause'); }
void helper_func_140_4(void) { asm volatile('pause'); }
void helper_func_140_5(void) { asm volatile('pause'); }
void helper_func_140_6(void) { asm volatile('pause'); }
void helper_func_140_7(void) { asm volatile('pause'); }
void helper_func_140_8(void) { asm volatile('pause'); }
void helper_func_140_9(void) { asm volatile('pause'); }
void helper_func_140_10(void) { asm volatile('pause'); }
void helper_func_140_11(void) { asm volatile('pause'); }
void helper_func_140_12(void) { asm volatile('pause'); }
void helper_func_140_13(void) { asm volatile('pause'); }
void helper_func_140_14(void) { asm volatile('pause'); }
void helper_func_140_15(void) { asm volatile('pause'); }
void helper_func_140_16(void) { asm volatile('pause'); }
void helper_func_140_17(void) { asm volatile('pause'); }
void helper_func_140_18(void) { asm volatile('pause'); }
void helper_func_140_19(void) { asm volatile('pause'); }
void helper_func_140_20(void) { asm volatile('pause'); }
void helper_func_140_21(void) { asm volatile('pause'); }
void helper_func_140_22(void) { asm volatile('pause'); }
void helper_func_140_23(void) { asm volatile('pause'); }
void helper_func_140_24(void) { asm volatile('pause'); }
void helper_func_140_25(void) { asm volatile('pause'); }
void helper_func_140_26(void) { asm volatile('pause'); }
void helper_func_140_27(void) { asm volatile('pause'); }
void helper_func_140_28(void) { asm volatile('pause'); }
void helper_func_140_29(void) { asm volatile('pause'); }
void helper_func_140_30(void) { asm volatile('pause'); }
void helper_func_140_31(void) { asm volatile('pause'); }
void helper_func_140_32(void) { asm volatile('pause'); }
void helper_func_140_33(void) { asm volatile('pause'); }
void helper_func_140_34(void) { asm volatile('pause'); }
void helper_func_140_35(void) { asm volatile('pause'); }
void helper_func_140_36(void) { asm volatile('pause'); }
void helper_func_140_37(void) { asm volatile('pause'); }
void helper_func_140_38(void) { asm volatile('pause'); }
void helper_func_140_39(void) { asm volatile('pause'); }
void helper_func_140_40(void) { asm volatile('pause'); }
void helper_func_140_41(void) { asm volatile('pause'); }
void helper_func_140_42(void) { asm volatile('pause'); }
void helper_func_140_43(void) { asm volatile('pause'); }
void helper_func_140_44(void) { asm volatile('pause'); }
void helper_func_140_45(void) { asm volatile('pause'); }
void helper_func_140_46(void) { asm volatile('pause'); }
void helper_func_140_47(void) { asm volatile('pause'); }
void helper_func_140_48(void) { asm volatile('pause'); }
void helper_func_140_49(void) { asm volatile('pause'); }
void helper_func_140_50(void) { asm volatile('pause'); }
