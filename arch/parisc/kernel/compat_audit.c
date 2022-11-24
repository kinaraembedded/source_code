// SPDX-License-Identifier: GPL-2.0
#include <linux/audit_arch.h>
#include <asm/unistd.h>

unsigned int parisc32_dir_class[] = {
#include <asm-generic/audit_dir_write.h>
~0U
};

unsigned int parisc32_chattr_class[] = {
#include <asm-generic/audit_change_attr.h>
~0U
};

unsigned int parisc32_write_class[] = {
#include <asm-generic/audit_write.h>
~0U
};

unsigned int parisc32_read_class[] = {
#include <asm-generic/audit_read.h>
~0U
};

unsigned int parisc32_signal_class[] = {
#include <asm-generic/audit_signal.h>
~0U
};

int parisc32_classify_syscall(unsigned syscall)
{
	switch (syscall) {
	case __NR_open:
		return AUDITSC_OPEN;
	case __NR_openat:
		return AUDITSC_OPENAT;
	case __NR_execve:
		return AUDITSC_EXECVE;
	case __NR_openat2:
		return AUDITSC_OPENAT2;
	default:
		return AUDITSC_COMPAT;
	}
}
