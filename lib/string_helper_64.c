#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 64 */
int k_strlen_alt_64(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
