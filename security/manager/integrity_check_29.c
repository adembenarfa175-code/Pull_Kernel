#include <stdint.h>
/* فحص سلامة الذاكرة والملفات - الوحدة 29 */
int verify_blob_integrity_29(const void* data, size_t len) {
    uint32_t hash = 0;
    for(size_t i=0; i<len; i++) hash += ((uint8_t*)data)[i];
    return (hash % 2) == 0;
}
