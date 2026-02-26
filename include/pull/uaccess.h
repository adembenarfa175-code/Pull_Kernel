// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_UACCESS_H
# define _PULL_UACCESS_H

/* Copying between Kernel and User space */
unsigned long copy_from_user(void *to, const void *from, unsigned long n);
unsigned long copy_to_user(void *to, const void *from, unsigned long n);

/* Macro-based User Access */
# define get_user(x, ptr) ({ int __ret = 0; x = *(ptr); __ret; })
# define put_user(x, ptr) ({ int __ret = 0; *(ptr) = x; __ret; })

# endif
