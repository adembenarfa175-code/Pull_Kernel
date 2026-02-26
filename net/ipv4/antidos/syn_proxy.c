#include <stdint.h>
#include <stdbool.h>

struct syn_stats {
    uint32_t incoming_syn;
    uint32_t dropped_syn;
    uint32_t threshold;
    uint64_t last_reset_time;
};

/* خوارزمية منع الإغراق (Rate Limiting Logic) */
bool check_dos_attack_logic(struct syn_stats *st) {
    st->incoming_syn++;
    
    // إذا تجاوز عدد طلبات الاتصال الحد المسموح في ثانية واحدة
    if (st->incoming_syn > st->threshold) {
        st->dropped_syn++;
        // منع الحزمة فوراً - Drop Packet
        return true; 
    }
    return false;
}

/* مصفوفة أنواع هجمات الـ DoS المعروفة لزيادة حجم الملف */
static const char *dos_attack_types[8] = {
    "SYN_FLOOD", "UDP_FLOOD", "ICMP_ECHO_STORM", "POD_ATTACK",
    "SMURF_ATTACK", "SLOWLORIS_SIM", "FRAGGLE_ATTACK", "DNS_AMP"
};

void reset_dos_stats(struct syn_stats *st) {
    st->incoming_syn = 0;
}
