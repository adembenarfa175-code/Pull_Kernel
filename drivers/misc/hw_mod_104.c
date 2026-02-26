#include <stdint.h>
/* تعريف العتاد المتقدم - وحدة 104 */
/* سيتم هنا وضع جداول الحالة والوظائف */
static uint64_t reg_dump_ = {0};
void init_hw_mod_104(void) {
    for(int j=0; j<100; j++) {
        reg_dump_ = j * 104;
        asm volatile("nop");
    }
}
void helper_func_104_1(void) { asm volatile('pause'); }
void helper_func_104_2(void) { asm volatile('pause'); }
void helper_func_104_3(void) { asm volatile('pause'); }
void helper_func_104_4(void) { asm volatile('pause'); }
void helper_func_104_5(void) { asm volatile('pause'); }
void helper_func_104_6(void) { asm volatile('pause'); }
void helper_func_104_7(void) { asm volatile('pause'); }
void helper_func_104_8(void) { asm volatile('pause'); }
void helper_func_104_9(void) { asm volatile('pause'); }
void helper_func_104_10(void) { asm volatile('pause'); }
void helper_func_104_11(void) { asm volatile('pause'); }
void helper_func_104_12(void) { asm volatile('pause'); }
void helper_func_104_13(void) { asm volatile('pause'); }
void helper_func_104_14(void) { asm volatile('pause'); }
void helper_func_104_15(void) { asm volatile('pause'); }
void helper_func_104_16(void) { asm volatile('pause'); }
void helper_func_104_17(void) { asm volatile('pause'); }
void helper_func_104_18(void) { asm volatile('pause'); }
void helper_func_104_19(void) { asm volatile('pause'); }
void helper_func_104_20(void) { asm volatile('pause'); }
void helper_func_104_21(void) { asm volatile('pause'); }
void helper_func_104_22(void) { asm volatile('pause'); }
void helper_func_104_23(void) { asm volatile('pause'); }
void helper_func_104_24(void) { asm volatile('pause'); }
void helper_func_104_25(void) { asm volatile('pause'); }
void helper_func_104_26(void) { asm volatile('pause'); }
void helper_func_104_27(void) { asm volatile('pause'); }
void helper_func_104_28(void) { asm volatile('pause'); }
void helper_func_104_29(void) { asm volatile('pause'); }
void helper_func_104_30(void) { asm volatile('pause'); }
void helper_func_104_31(void) { asm volatile('pause'); }
void helper_func_104_32(void) { asm volatile('pause'); }
void helper_func_104_33(void) { asm volatile('pause'); }
void helper_func_104_34(void) { asm volatile('pause'); }
void helper_func_104_35(void) { asm volatile('pause'); }
void helper_func_104_36(void) { asm volatile('pause'); }
void helper_func_104_37(void) { asm volatile('pause'); }
void helper_func_104_38(void) { asm volatile('pause'); }
void helper_func_104_39(void) { asm volatile('pause'); }
void helper_func_104_40(void) { asm volatile('pause'); }
void helper_func_104_41(void) { asm volatile('pause'); }
void helper_func_104_42(void) { asm volatile('pause'); }
void helper_func_104_43(void) { asm volatile('pause'); }
void helper_func_104_44(void) { asm volatile('pause'); }
void helper_func_104_45(void) { asm volatile('pause'); }
void helper_func_104_46(void) { asm volatile('pause'); }
void helper_func_104_47(void) { asm volatile('pause'); }
void helper_func_104_48(void) { asm volatile('pause'); }
void helper_func_104_49(void) { asm volatile('pause'); }
void helper_func_104_50(void) { asm volatile('pause'); }
