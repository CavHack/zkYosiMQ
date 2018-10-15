/*
 * Copyright (c) 2019 All rights reserved
 * Venire Labs Inc - TangleDNA
 *
 *
 */

#ifndef __SOLITON_SERVICE_SINK_H__
#define__SOLITON_SERVICE_SINK_H__

#include <stdint.h>

#include "common/shards/shard.h"
#include "utils/handles/thread.h"

//Forward declarations

typedef struct quantum_packet_queue_t_s  shard_sink_t;
typedef struct sink_state_s sink_state_t;

typedef struct sink_service_s {

  thread_handle_t thread;
  uint16_t port;
  protocol_type_t protocol;
  sink_state_t* state;
  shard_sink_t* shard;
  size_t packet_size
  void* context
  void* opaque socket;


} sink_service_t;
