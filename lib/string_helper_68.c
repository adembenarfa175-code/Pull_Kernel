#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 68 */
int k_strlen_alt_68(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
