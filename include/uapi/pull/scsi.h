// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_SCSI_H

# define _UAPI_PULL_SCSI_H

# define SCSI_IOCTL_SEND_COMMAND 1

struct scsi_idlun { uint32_t dev_id; uint32_t host_unique_id; };
# endif

