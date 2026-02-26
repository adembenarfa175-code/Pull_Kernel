// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_ELF_H

# define _UAPI_PULL_ELF_H

typedef struct {
    unsigned char e_ident[16];
    unsigned short e_type;
    unsigned short e_machine;
    unsigned long e_entry;
} Elf64_Ehdr;
# endif

