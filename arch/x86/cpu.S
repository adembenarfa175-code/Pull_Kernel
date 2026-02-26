// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

.section .text
.global load_gdt
.global load_idt

load_gdt:
    lgdt (%rdi)    /* download table GDT from the address Passer in registered rdi */
    push $0x08     /* address section Code New (Kernel Code Selector) */
    lea .reload_cs(%rip), %rax
    push %rax
    lretq          /* to implement Far Return To update registered CS */
.reload_cs:
    mov $0x10, %ax /* address section Data (Kernel Data Selector) */
    mov %ax, %ds
    mov %ax, %es
    mov %ax, %fs
    mov %ax, %gs
    mov %ax, %ss
    ret

load_idt:
    lidt (%rdi)    /* download table IDT */
    ret
