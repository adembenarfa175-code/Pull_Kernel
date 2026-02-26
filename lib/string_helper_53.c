#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 53 */
int k_strlen_alt_53(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
