# SPDX-License-Identifier: GPL-2.0-only
# Pull Kernel team

OUTPUT_FORMAT("elf64-x86-64")
ENTRY(_start)

SECTIONS
{
    /* تبدأ النواة عادة عند العنوان 2 ميجابايت */
    . = 2M;

    .text : {
        *(.multiboot)   /* معلومات الإقلاع */
        *(.text)        /* كود النواة */
    }

    .rodata : {
        *(.rodata)      /* البيانات للقراءة فقط */
    }

    .data : {
        *(.data)        /* البيانات القابلة للتعديل */
    }

    .bss : {
        *(COMMON)
        *(.bss)         /* الذاكرة الصفرية */
    }

    _kernel_end = .;    /* نهاية النواة في الذاكرة */
}
