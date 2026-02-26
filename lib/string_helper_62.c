#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 62 */
int k_strlen_alt_62(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
