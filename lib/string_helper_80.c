#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 80 */
int k_strlen_alt_80(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
