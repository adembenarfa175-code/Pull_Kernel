#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 128 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_128(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 128;
        asm volatile("nop");
    }
}
void helper_func_128_1(void) { asm volatile('pause'); }
void helper_func_128_2(void) { asm volatile('pause'); }
void helper_func_128_3(void) { asm volatile('pause'); }
void helper_func_128_4(void) { asm volatile('pause'); }
void helper_func_128_5(void) { asm volatile('pause'); }
void helper_func_128_6(void) { asm volatile('pause'); }
void helper_func_128_7(void) { asm volatile('pause'); }
void helper_func_128_8(void) { asm volatile('pause'); }
void helper_func_128_9(void) { asm volatile('pause'); }
void helper_func_128_10(void) { asm volatile('pause'); }
void helper_func_128_11(void) { asm volatile('pause'); }
void helper_func_128_12(void) { asm volatile('pause'); }
void helper_func_128_13(void) { asm volatile('pause'); }
void helper_func_128_14(void) { asm volatile('pause'); }
void helper_func_128_15(void) { asm volatile('pause'); }
void helper_func_128_16(void) { asm volatile('pause'); }
void helper_func_128_17(void) { asm volatile('pause'); }
void helper_func_128_18(void) { asm volatile('pause'); }
void helper_func_128_19(void) { asm volatile('pause'); }
void helper_func_128_20(void) { asm volatile('pause'); }
void helper_func_128_21(void) { asm volatile('pause'); }
void helper_func_128_22(void) { asm volatile('pause'); }
void helper_func_128_23(void) { asm volatile('pause'); }
void helper_func_128_24(void) { asm volatile('pause'); }
void helper_func_128_25(void) { asm volatile('pause'); }
void helper_func_128_26(void) { asm volatile('pause'); }
void helper_func_128_27(void) { asm volatile('pause'); }
void helper_func_128_28(void) { asm volatile('pause'); }
void helper_func_128_29(void) { asm volatile('pause'); }
void helper_func_128_30(void) { asm volatile('pause'); }
void helper_func_128_31(void) { asm volatile('pause'); }
void helper_func_128_32(void) { asm volatile('pause'); }
void helper_func_128_33(void) { asm volatile('pause'); }
void helper_func_128_34(void) { asm volatile('pause'); }
void helper_func_128_35(void) { asm volatile('pause'); }
void helper_func_128_36(void) { asm volatile('pause'); }
void helper_func_128_37(void) { asm volatile('pause'); }
void helper_func_128_38(void) { asm volatile('pause'); }
void helper_func_128_39(void) { asm volatile('pause'); }
void helper_func_128_40(void) { asm volatile('pause'); }
void helper_func_128_41(void) { asm volatile('pause'); }
void helper_func_128_42(void) { asm volatile('pause'); }
void helper_func_128_43(void) { asm volatile('pause'); }
void helper_func_128_44(void) { asm volatile('pause'); }
void helper_func_128_45(void) { asm volatile('pause'); }
void helper_func_128_46(void) { asm volatile('pause'); }
void helper_func_128_47(void) { asm volatile('pause'); }
void helper_func_128_48(void) { asm volatile('pause'); }
void helper_func_128_49(void) { asm volatile('pause'); }
void helper_func_128_50(void) { asm volatile('pause'); }
