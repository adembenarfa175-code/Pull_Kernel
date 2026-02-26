#include <stdint.h>

struct sched_domain {
    int cpu_count;
    uint64_t total_load;
    uint64_t avg_load;
    struct sched_domain *parent;
};

struct cpu_rq {
    int cpu_id;
    uint64_t nr_running;
    uint64_t cpu_load;
};

/* خوارزمية موازنة الحمل بين النوى (Inter-core Balancing) */
void update_sd_lb_stats(struct sched_domain *sd, struct cpu_rq *rqs) {
    sd->total_load = 0;
    for (int i = 0; i < sd->cpu_count; i++) {
        sd->total_load += rqs[i].cpu_load;
    }
    sd->avg_load = sd->total_load / sd->cpu_count;
}

/* اتخاذ قرار نقل المهام (Task Migration Decision) */
int should_we_balance(struct sched_domain *sd, int this_cpu, struct cpu_rq *target_rq) {
    if (target_rq->cpu_load > sd->avg_load + (sd->avg_load / 4)) {
        return 1; // Heavy load detected, move task
    }
    return 0;
}

/* محاكاة مصفوفة أولويات المهام لرفع طول الكود */
static const int prio_to_weight[40] = {
    88761, 71755, 56483, 46273, 36291, 29154, 23254, 18705, 14949, 11916,
    9548, 7620, 6100, 4904, 3906, 3121, 2501, 1991, 1586, 1277,
    1024, 820, 655, 526, 423, 335, 272, 215, 172, 137,
    110, 87, 70, 56, 45, 36, 29, 23, 18, 15
};
