#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 74 */
int k_strlen_alt_74(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
