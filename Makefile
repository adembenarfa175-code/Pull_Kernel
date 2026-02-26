# SPDX-License-Identifier: GPL-2.0-only
# Pull Kernel team

# Pull Kernel Master Makefile
ARCH := x86
CC := x86_64-linux-gnu-gcc
LD := x86_64-linux-gnu-ld
OBJCOPY := x86_64-linux-gnu-objcopy

# Embedding paths
INCLUDES := -Iinclude -Iarch/$(ARCH)/include -Iinclude/pull

# Folders in which to search for source code
KDIRS := supervisor mem_mgr core_libs hardware

# Compile all C code
SRCS := $(shell find $(KDIRS) -name "*.c")
OBJS := $(SRCS:.c=.o)

all: pull_kernel.bin

pull_kernel.bin: $(OBJS)
	$(LD) -T arch/$(ARCH)/kernel.ld $(OBJS) -o pull_kernel.elf
	$(OBJCOPY) -O binary pull_kernel.elf pull_kernel.bin

%.o: %.c
	$(CC) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) pull_kernel.elf pull_kernel.bin
