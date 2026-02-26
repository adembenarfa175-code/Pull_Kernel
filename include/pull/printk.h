// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_PRINTK_H
# define _PULL_PRINTK_H

#include <pull/compiler.h>

/* Log Levels definitions */
# define KERN_EMERG   "<0>"
# define KERN_ALERT   "<1>"
# define KERN_CRIT    "<2>"
# define KERN_ERR "<3>"
# define KERN_WARNING "<4>"
# define KERN_NOTICE  "<5>"
# define KERN_INFO    "<6>"
# define KERN_DEBUG   "<7>"

/* Standard Printk Macros */
# define pr_emerg(fmt, ...) printk(KERN_EMERG fmt, ##__VA_ARGS__)
# define pr_alert(fmt, ...) printk(KERN_ALERT fmt, ##__VA_ARGS__)
# define pr_crit(fmt, ...)   printk(KERN_CRIT fmt, ##__VA_ARGS__)
# define pr_err(fmt, ...) printk(KERN_ERR fmt, ##__VA_ARGS__)
# define pr_warn(fmt, ...)   printk(KERN_WARNING fmt, ##__VA_ARGS__)
# define pr_notice(fmt, ...) printk(KERN_NOTICE fmt, ##__VA_ARGS__)
# define pr_info(fmt, ...) printk(KERN_INFO fmt, ##__VA_ARGS__)
# define pr_debug(fmt, ...) printk(KERN_DEBUG fmt, ##__VA_ARGS__)

/* Device-specific Logging (Simulated for now) */
# define dev_err(dev, fmt, ...)  pr_err("%s %s: " fmt, "DEV", (dev)->name, ##__VA_ARGS__)
# define dev_warn(dev, fmt, ...) pr_warn("%s %s: " fmt, "DEV", (dev)->name, ##__VA_ARGS__)
# define dev_info(dev, fmt, ...) pr_info("%s %s: " fmt, "DEV", (dev)->name, ##__VA_ARGS__)
# define dev_dbg(dev, fmt, ...)  pr_debug("%s %s: " fmt, "DEV", (dev)->name, ##__VA_ARGS__)

# endif
