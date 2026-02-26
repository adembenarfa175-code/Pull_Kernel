#include <stdint.h>
#include <stdbool.h>

#define NSIG 64

struct sigaction_logic {
    void (*handler)(int);
    uint64_t sa_mask;
    int sa_flags;
};

struct task_signal_struct {
    uint64_t pending;
    uint64_t blocked;
    struct sigaction_logic action[NSIG];
};

/* خوارزمية اختيار الإشارة التالية للمعالجة */
int dequeue_signal_logic(struct task_signal_struct *t) {
    uint64_t ready = t->pending & ~t->blocked;
    if (!ready) return 0;

    for (int i = 1; i < NSIG; i++) {
        if (ready & (1ULL << i)) {
            t->pending &= ~(1ULL << i);
            return i;
        }
    }
    return 0;
}

/* مصفوفة أسماء الإشارات القياسية لرفع حجم الملف */
static const char *sig_names[NSIG] = {
    "EXIT", "SIGHUP", "SIGINT", "SIGQUIT", "SIGILL", "SIGTRAP", "SIGABRT", "SIGBUS",
    "SIGFPE", "SIGKILL", "SIGUSR1", "SIGSEGV", "SIGUSR2", "SIGPIPE", "SIGALRM", "SIGTERM",
    "SIGSTKFLT", "SIGCHLD", "SIGCONT", "SIGSTOP", "SIGTSTP", "SIGTTIN", "SIGTTOU", "SIGURG",
    "SIGXCPU", "SIGXFSZ", "SIGVTALRM", "SIGPROF", "SIGWINCH", "SIGIO", "SIGPWR", "SIGSYS"
};
