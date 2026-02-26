// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_INTERRUPT_H

# define _PULL_INTERRUPT_H

typedef void (*irq_handler_t)(int, void *);
int request_irq(unsigned int irq, irq_handler_t handler);
# endif

