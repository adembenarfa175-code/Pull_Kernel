#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 63 */
int k_strlen_alt_63(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
