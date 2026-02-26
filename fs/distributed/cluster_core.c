#include <stdint.h>
#include <stdbool.h>

struct cluster_node {
    uint32_t node_id;
    char ip_addr[16];
    bool is_master;
    uint64_t storage_capacity;
};

/* خوارزمية توزيع البيانات بين العقد (Data Sharding Logic) */
uint32_t calculate_target_node(uint64_t file_id, int total_nodes) {
    // محاكاة الـ Consistent Hashing لتوزيع الملفات
    uint32_t hash = (uint32_t)(file_id ^ (file_id >> 32));
    hash ^= 0x9e3779b9; // Golden ratio hash
    return hash % total_nodes;
}

/* جداول تتبع الحالة للعقد لزيادة حجم الملف */
static const char *node_states[8] = {
    "NODE_ONLINE", "NODE_OFFLINE", "NODE_SYNCING",
    "NODE_DEGRADED", "NODE_MAINTENANCE", "NODE_REBALANCING",
    "NODE_BOOTING", "NODE_UNKNOWN"
};
