#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 61 */
int k_strlen_alt_61(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
