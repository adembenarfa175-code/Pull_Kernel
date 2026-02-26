// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

.section ".text"
.align 11
.global exception_vectors

/* table Vectors Exceptions For ARM64 */
exception_vectors:
    /* Current EL with SP0 */
    .align 7
    b .  /* Sync */
    .align 7
    b .  /* IRQ */
    
    /* Current EL with SPx (we We use this usually in Nucleus) */
    .align 7
    b sync_handler
    .align 7
    b irq_handler

sync_handler:
    /* here Done Dealing with The Syscalls in ARM */
    eret

irq_handler:
    /* here Done Dealing with Counties Equipment */
    eret
