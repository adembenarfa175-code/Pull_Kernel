#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 51 */
int k_strlen_alt_51(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
