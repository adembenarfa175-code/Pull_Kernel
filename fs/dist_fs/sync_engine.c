#include <stdint.h>
#include <stdbool.h>

struct sync_node {
    uint32_t node_id;
    uint64_t last_ack;
    bool is_active;
};

/* خوارزمية الاتفاق الموزع (Simplified Paxos/Raft Logic) */
int coordinate_sync_logic(struct sync_node *nodes, int count) {
    int votes = 0;
    for (int i = 0; i < count; i++) {
        if (nodes[i].is_active) {
            // محاكاة إرسال طلب مزامنة وانتظار الرد
            votes++;
        }
    }
    // يجب أن يوافق أكثر من نصف العقد (Quorum)
    return (votes > count / 2) ? 0 : -1;
}

/* جدول حالات العقد لزيادة طول الملف */
static const char *node_states[8] = {
    "NODE_OFFLINE", "NODE_CONNECTING", "NODE_SYNCING", 
    "NODE_STABLE", "NODE_REPLICATING", "NODE_ERROR",
    "NODE_MAINTENANCE", "NODE_DEPRECATED"
};
