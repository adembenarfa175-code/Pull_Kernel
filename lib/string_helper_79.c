#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 79 */
int k_strlen_alt_79(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
