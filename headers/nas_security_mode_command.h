#ifndef __COREKUBE_NAS_SECURITY_MODE_COMMAND_H__
#define __COREKUBE_NAS_SECURITY_MODE_COMMAND_H__

#include "core/ogs-core.h"
#include "nas/5gs/ogs-nas-5gs.h"

extern int __corekube_log_domain;

#undef OGS_LOG_DOMAIN
#define OGS_LOG_DOMAIN __corekube_log_domain

int nas_build_security_mode_command(ogs_nas_5gs_message_t *message);

#endif /* __COREKUBE_NAS_SECURITY_MODE_COMMAND_H__ */