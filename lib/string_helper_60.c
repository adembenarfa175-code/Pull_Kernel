#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 60 */
int k_strlen_alt_60(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
