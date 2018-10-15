#ifndef __COMMON_SHARD_H__
#define __COMMON_SHARD_H__
#pragma once

#define HASH_SIZE 32
#define WOTS_ell1c (1 << (WOTS_LOG_ell1))
#define WOTS_chksum 3
#define WOTS_ell((WOTS_ell1) + (WOTS_chksum))
#define WOTS_w  16

/*Compile flgags*/
#if 0
#define PORS_k 28
#define MERKLE_h 5
#define YOSI_d 10
#define YOSI_c 14
#endif

#define PORS_tau 16
#define PORS_t (1 << (PORS_tau))
#define MERKLE_hhh(1, <<(MERKLE_h))

#define  MAX_SOLITON_LENGTH 8
#define  MAX_SLAVE_LENGTH 225

typedef enum mux_protocol_c33 { PROTOCOL_TCP, PROTOCOL_UDP} mux_protocol_c33;

#endif
