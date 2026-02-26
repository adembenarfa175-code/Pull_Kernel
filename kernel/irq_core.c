#include <stdint.h>

struct irq_desc { unsigned int irq; uint32_t status; void (*handler)(void); };

void handle_irq_event(struct irq_desc *desc) {
    desc->status |= (1 << 0); // Set IRQ_INPROGRESS
    if (desc->handler) desc->handler();
    desc->status &= ~(1 << 0); // Clear IRQ_INPROGRESS
}
