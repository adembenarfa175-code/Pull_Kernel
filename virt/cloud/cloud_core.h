#ifndef CLOUD_CORE_H
#define CLOUD_CORE_H
#include <stdint.h>
// نظام تعريف العقد السحابية في Pull Kernel
typedef struct {
    uint32_t node_id;
    uint64_t capacity;
    uint8_t status;
} cloud_node_t;
#endif
