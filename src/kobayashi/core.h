/*
* Copyrrith (c) Venire Labs Inc 2019
*
*/

#ifndef __KOBAYASHI__CORE_H__
#define __KOBAYASHI__CORE_H__

#include "kobayashi/api.h"
#include "kobayashi/conf.h"
#include "telemetry/telemetry.h"
#include "solitonStreams/components/transaction_requester.h"
#include "solitonStreams/building.h"

#ifdef __cplusplus
extern "C" {
  #endif

  typedef struct quant_shard_s {
    bool running;
    yosi_kobayashi_conf_t conf;
    yosi_telemetry_t consensus;
    yosi_building_t node;
    yosi_api_t api;
  } quant_shard_s;

  /**
 * Initializes a core
 *
 * @param core The core
 *
 * @return a status code
 */
retcode_t core_init(core_t *const core);

/**
 * Starts a core
 *
 * @param core The core
 *
 * @return a status code
 */
retcode_t core_start(core_t *const core);

/**
 * Stops a core
 *
 * @param core The core
 *
 * @return a status code
 */
retcode_t core_stop(core_t *const core);

/**
 * Destroys a core
 *
 * @param core The core
 *
 * @return a status code
 */
retcode_t core_destroy(core_t *const core);

#ifdef __cplusplus

}
#endif

#endif // __KOBAYASHI__CORE_H__
