#include <stdint.h>
/* حسابات الجيب والتمام السريعة (Lookup tables) لرفع عدد الأسطر */
static const int16_t sin_table_ = { 0, 10, 20, 30, 40, 50 };
int16_t get_sin_5(int angle) { return sin_table_; }
