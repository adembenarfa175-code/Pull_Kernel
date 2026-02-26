#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 65 */
int k_strlen_alt_65(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
