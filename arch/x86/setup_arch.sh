#!/bin/bash
# SPDX-License-Identifier: GPL-2.0-only
# Pull Kernel team
# تصحيح المسارات لضمان الكتابة داخل مجلد المعمارية
ASM_DIR="arch/x86/include/asm"
mkdir -p $ASM_DIR

# 1. GDT Header
cat << 'EOT' > $ASM_DIR/gdt.h
#ifndef _PULL_GDT_H
#define _PULL_GDT_H
#include <pull/types.h>

struct gdt_entry {
    u16 limit_low;
    u16 base_low;
    u8  base_middle;
    u8  access;
    u8  granularity;
    u8  base_high;
} __packed;

struct gdt_ptr {
    u16 limit;
    u64 base;
} __packed;

void gdt_init(void);
#endif
EOT

# 2. IDT Header
cat << 'EOT' > $ASM_DIR/idt.h
#ifndef _PULL_IDT_H
#define _PULL_IDT_H
#include <pull/types.h>

struct idt_entry {
    u16 offset_low;
    u16 selector;
    u8  ist;
    u8  types_attr;
    u16 offset_mid;
    u32 offset_high;
    u32 zero;
} __packed;

struct idt_ptr {
    u16 limit;
    u64 base;
} __packed;

void idt_init(void);
#endif
EOT

# 3. CPU Assembly Logic (الروح المحركة للمعالج)
cat << 'EOT' > arch/x86/cpu.S
.section .text
.global load_gdt
.global load_idt

load_gdt:
    lgdt (%rdi)    /* تحميل جدول GDT من العنوان الممرر في مسجل rdi */
    push $0x08     /* عنوان مقطع الكود الجديد (Kernel Code Selector) */
    lea .reload_cs(%rip), %rax
    push %rax
    lretq          /* تنفيذ Far Return لتحديث مسجل CS */
.reload_cs:
    mov $0x10, %ax /* عنوان مقطع البيانات (Kernel Data Selector) */
    mov %ax, %ds
    mov %ax, %es
    mov %ax, %fs
    mov %ax, %gs
    mov %ax, %ss
    ret

load_idt:
    lidt (%rdi)    /* تحميل جدول IDT */
    ret
EOT

echo "Architecture Headers and Assembly (GDT/IDT) Fixed and Created!"
