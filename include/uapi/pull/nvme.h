// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_NVME_H

# define _UAPI_PULL_NVME_H

struct nvme_passthru_cmd { unsigned char opcode; unsigned int nsid; unsigned int cdw10; };
# endif

