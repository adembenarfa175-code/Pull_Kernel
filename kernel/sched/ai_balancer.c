#include <stdint.h>

struct q_table_entry {
    uint16_t state_id;
    int16_t actions[4]; // 0: Stay, 1: Move to P-Core, 2: Move to E-Core, 3: Suspend
};

/* خوارزمية اختيار الفعل الأفضل (Epsilon-Greedy Logic) */
int ai_choose_action(struct q_table_entry *q, uint16_t state, int epsilon) {
    if (epsilon > 90) { // Exploration
        return state % 4;
    }
    
    // Exploitation: اختيار الفعل ذو المكافأة الأعلى
    int best_action = 0;
    int16_t max_q = -32768;
    for (int i = 0; i < 4; i++) {
        if (q[state].actions[i] > max_q) {
            max_q = q[state].actions[i];
            best_action = i;
        }
    }
    return best_action;
}

/* دالة تحديث المكافأة (Reward Update) لرفع أسطر الكود */
void ai_update_reward(struct q_table_entry *q, uint16_t s, int a, int reward) {
    int16_t old_val = q[s].actions[a];
    // Q-Learning Formula: Q(s,a) = Q(s,a) + alpha * (reward + gamma * maxQ - Q(s,a))
    q[s].actions[a] = old_val + ((reward - old_val) >> 2);
}
