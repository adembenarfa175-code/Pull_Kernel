// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_MAIN_HEADER_H
# define _PULL_MAIN_HEADER_H

/**
 * Pull Kernel - Master Header File
 * Generated automatically by gen_main_header.sh
 * This file aggregates ALL internal and UAPI kernel headers.
 */

/* --- Core Internal Kernel Headers --- */
#include <pull/bitops.h>
#include <pull/cache.h>
#include <pull/compiler.h>
#include <pull/ctype.h>
#include <pull/export.h>
#include <pull/init.h>
#include <pull/init_syscalls.h>
#include <pull/interrupt.h>
#include <pull/io.h>
#include <pull/jump_label.h>
#include <pull/kcsan.h>
#include <pull/kernel.h>
#include <pull/list.h>
#include <pull/memblock.h>
#include <pull/mm.h>
#include <pull/module.h>
#include <pull/panic.h>
#include <pull/pidfs.h>
#include <pull/printk.h>
#include <pull/ptdump.h>
#include <pull/random.h>
#include <pull/randomize_kstack.h>
#include <pull/rodata_test.h>
#include <pull/sched.h>
#include <pull/slab.h>
#include <pull/smp.h>
#include <pull/spinlock.h>
#include <pull/stackdepot.h>
#include <pull/start_kernel.h>
#include <pull/status.h>
#include <pull/string.h>
#include <pull/syscalls.h>
#include <pull/system_map.h>
#include <pull/time_namespace.h>
#include <pull/types.h>
#include <pull/unistd.h>

/* --- User API (UAPI) Headers --- */
#include <uapi/pull/audit.h>
#include <uapi/pull/auxvec.h>
#include <uapi/pull/blkpg.h>
#include <uapi/pull/bpf.h>
#include <uapi/pull/btrfs.h>
#include <uapi/pull/capability.h>
#include <uapi/pull/cdrom.h>
#include <uapi/pull/cgroupstats.h>
#include <uapi/pull/dirent.h>
#include <uapi/pull/dns_resolver.h>
#include <uapi/pull/elf.h>
#include <uapi/pull/errno.h>
#include <uapi/pull/ethtool.h>
#include <uapi/pull/eventfd.h>
#include <uapi/pull/fanotify.h>
#include <uapi/pull/fb.h>
#include <uapi/pull/fcntl.h>
#include <uapi/pull/fs.h>
#include <uapi/pull/fuse.h>
#include <uapi/pull/futex.h>
#include <uapi/pull/glibc_api.h>
#include <uapi/pull/hdreg.h>
#include <uapi/pull/hid.h>
#include <uapi/pull/hw_breakpoint.h>
#include <uapi/pull/if_arp.h>
#include <uapi/pull/if_tun.h>
#include <uapi/pull/in.h>
#include <uapi/pull/inotify.h>
#include <uapi/pull/input.h>
#include <uapi/pull/ioctls.h>
#include <uapi/pull/ipc.h>
#include <uapi/pull/kcmp.h>
#include <uapi/pull/limits.h>
#include <uapi/pull/loop.h>
#include <uapi/pull/major.h>
#include <uapi/pull/mman.h>
#include <uapi/pull/mount.h>
#include <uapi/pull/msg.h>
#include <uapi/pull/musl_api.h>
#include <uapi/pull/netlink.h>
#include <uapi/pull/nvme.h>
#include <uapi/pull/pci.h>
#include <uapi/pull/perf_event.h>
#include <uapi/pull/personality.h>
#include <uapi/pull/poll.h>
#include <uapi/pull/posix_types.h>
#include <uapi/pull/prctl.h>
#include <uapi/pull/ptrace.h>
#include <uapi/pull/quota.h>
#include <uapi/pull/random.h>
#include <uapi/pull/reboot.h>
#include <uapi/pull/resource.h>
#include <uapi/pull/rfkill.h>
#include <uapi/pull/rtc.h>
#include <uapi/pull/rtnetlink.h>
#include <uapi/pull/sched.h>
#include <uapi/pull/scsi.h>
#include <uapi/pull/seccomp.h>
#include <uapi/pull/select.h>
#include <uapi/pull/sem.h>
#include <uapi/pull/serial.h>
#include <uapi/pull/setup.h>
#include <uapi/pull/shm.h>
#include <uapi/pull/signal.h>
#include <uapi/pull/signalfd.h>
#include <uapi/pull/socket.h>
#include <uapi/pull/sound.h>
#include <uapi/pull/stat.h>
#include <uapi/pull/sysctl.h>
#include <uapi/pull/taskstats.h>
#include <uapi/pull/tcp.h>
#include <uapi/pull/time.h>
#include <uapi/pull/timerfd.h>
#include <uapi/pull/tty.h>
#include <uapi/pull/types.h>
#include <uapi/pull/uinput.h>
#include <uapi/pull/unistd.h>
#include <uapi/pull/usb.h>
#include <uapi/pull/usbdevice_fs.h>
#include <uapi/pull/utime.h>
#include <uapi/pull/videodev2.h>
#include <uapi/pull/vt.h>
#include <uapi/pull/wait.h>
#include <uapi/pull/watchdog.h>

/* --- Architecture Specific Headers --- */
# if defined(__x86_64__)
    #include <asm/cacheflush.h>
    #include <asm/gdt.h>
    #include <asm/idt.h>
    #include <asm/io.h>
    #include <asm/sections.h>
    #include <asm/setup.h>
# elif defined(__aarch64__)
    #include <asm/processor.h>
# endif

/* --- Subsystem Headers --- */
#include <kunit/test.h>
#include <net/net_namespace.h>
#include <trace/events/initcall.h>

# endif /* _PULL_MAIN_HEADER_H */
