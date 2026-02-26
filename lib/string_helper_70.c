#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 70 */
int k_strlen_alt_70(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
