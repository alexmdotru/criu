#ifndef FILE_IDS_H__
#define FILE_IDS_H__

#include "compiler.h"
#include "types.h"
#include "rbtree.h"

#define FD_ID_INVALID		(-1U)
#define FD_PID_INVALID		(-2U)

#define MAKE_FD_GENID(dev, ino, pos) \
	(((u32)(dev) ^ (u32)(ino) ^ (u32)(pos)))

struct fdinfo_entry;
extern int fd_id_generate(pid_t pid, struct fdinfo_entry *fe);
extern void fd_id_show_tree(void);

#endif /* FILE_IDS_H__ */
