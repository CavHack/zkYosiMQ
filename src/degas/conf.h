/*
* All rights reserved
The venire labs 2019
*
*/

#ifndef __DEGAS_CONF_H__
#define __DEGAS_CONF_H__

#include <stdbool.h>

#include "degas/api/conf.h"
#include "common/errors.h"
#include "telemetry/conf.h"
#include "utils/logger_helper.h"

#define DEFAULT_LOG_LEVEL LOGGER_INFO

#ifdef __cplusplus
extern "C" {

typedef struct yosi_degas_conf_s {
  // Valid log levels: LOGGER_DEBUG, LOGGER_INFO, LOGGER_NOTICE,
 // LOGGER_WARNING, LOGGER_ERR, LOGGER_CRIT, LOGGER_ALERT and LOGGER_EMERG

  logger_level_t log_level;
}



}
