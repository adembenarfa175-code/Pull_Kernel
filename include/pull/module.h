// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_MODULE_H
# define _PULL_MODULE_H

# define MODULE_LICENSE(_license)      static const char __license[] = _license
# define MODULE_AUTHOR(_author)        static const char __author[] = _author
# define MODULE_DESCRIPTION(_desc)     static const char __description[] = _desc

# define EXPORT_SYMBOL(sym)
# define EXPORT_SYMBOL_GPL(sym)

/* Module init/exit macros */
# define module_init(initfn)           int init_module(void) { return initfn(); }
# define module_exit(exitfn)           void cleanup_module(void) { exitfn(); }

/* Parameters (Simplified) */
# define module_param(name, type, perm)
# define module_param_array(name, type, nump, perm)
# define module_param_named(name, value, type, perm)

# endif
