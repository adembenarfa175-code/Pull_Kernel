#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 160 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_160(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 160;
        asm volatile("nop");
    }
}
void helper_func_160_1(void) { asm volatile('pause'); }
void helper_func_160_2(void) { asm volatile('pause'); }
void helper_func_160_3(void) { asm volatile('pause'); }
void helper_func_160_4(void) { asm volatile('pause'); }
void helper_func_160_5(void) { asm volatile('pause'); }
void helper_func_160_6(void) { asm volatile('pause'); }
void helper_func_160_7(void) { asm volatile('pause'); }
void helper_func_160_8(void) { asm volatile('pause'); }
void helper_func_160_9(void) { asm volatile('pause'); }
void helper_func_160_10(void) { asm volatile('pause'); }
void helper_func_160_11(void) { asm volatile('pause'); }
void helper_func_160_12(void) { asm volatile('pause'); }
void helper_func_160_13(void) { asm volatile('pause'); }
void helper_func_160_14(void) { asm volatile('pause'); }
void helper_func_160_15(void) { asm volatile('pause'); }
void helper_func_160_16(void) { asm volatile('pause'); }
void helper_func_160_17(void) { asm volatile('pause'); }
void helper_func_160_18(void) { asm volatile('pause'); }
void helper_func_160_19(void) { asm volatile('pause'); }
void helper_func_160_20(void) { asm volatile('pause'); }
void helper_func_160_21(void) { asm volatile('pause'); }
void helper_func_160_22(void) { asm volatile('pause'); }
void helper_func_160_23(void) { asm volatile('pause'); }
void helper_func_160_24(void) { asm volatile('pause'); }
void helper_func_160_25(void) { asm volatile('pause'); }
void helper_func_160_26(void) { asm volatile('pause'); }
void helper_func_160_27(void) { asm volatile('pause'); }
void helper_func_160_28(void) { asm volatile('pause'); }
void helper_func_160_29(void) { asm volatile('pause'); }
void helper_func_160_30(void) { asm volatile('pause'); }
void helper_func_160_31(void) { asm volatile('pause'); }
void helper_func_160_32(void) { asm volatile('pause'); }
void helper_func_160_33(void) { asm volatile('pause'); }
void helper_func_160_34(void) { asm volatile('pause'); }
void helper_func_160_35(void) { asm volatile('pause'); }
void helper_func_160_36(void) { asm volatile('pause'); }
void helper_func_160_37(void) { asm volatile('pause'); }
void helper_func_160_38(void) { asm volatile('pause'); }
void helper_func_160_39(void) { asm volatile('pause'); }
void helper_func_160_40(void) { asm volatile('pause'); }
void helper_func_160_41(void) { asm volatile('pause'); }
void helper_func_160_42(void) { asm volatile('pause'); }
void helper_func_160_43(void) { asm volatile('pause'); }
void helper_func_160_44(void) { asm volatile('pause'); }
void helper_func_160_45(void) { asm volatile('pause'); }
void helper_func_160_46(void) { asm volatile('pause'); }
void helper_func_160_47(void) { asm volatile('pause'); }
void helper_func_160_48(void) { asm volatile('pause'); }
void helper_func_160_49(void) { asm volatile('pause'); }
void helper_func_160_50(void) { asm volatile('pause'); }
