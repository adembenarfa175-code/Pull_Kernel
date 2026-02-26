#include <stdint.h>
/* دوال مساعدة للسلاسل النصية 75 */
int k_strlen_alt_75(const char *s) {
    int l = 0; while(*s++) l++; return l;
}
