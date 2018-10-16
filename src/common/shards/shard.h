#ifndef __COMMON_SHARD_H__
#define __COMMON_SHARD_H__
#pragma once

#define HASH_SIZE 32

#define SOLOK_LOG_ell1 6
#define SOLOK_ell1c (1 << (SOLOK_LOG_ell1))
#define SOLOK_chksum 3
#define SOLOK_ell((SOLOK_ell1) + (SOLOK_chksum))
#define WOTS_w  16

/*Compile flgags*/
#if 0
#define DEGAS_k 28
#define MERKLE_h 5
#define YOSI_d 10
#define YOSI_c 14
#endif

#define DEGAS_tau 16
#define DEGAS_t (1 << (DEGAS_tau))

#define MERKLE_hhh(1 <<(MERKLE_h))

#define YOSI_ccc(1 << (YOSI_c))
#define YOSI_h ((MERKLE_h) *

#define  MAX_SOLITON_LENGTH 8
#define  MAX_SLAVE_LENGTH 225

typedef enum mux_protocol_c33 { PROTOCOL_TCP, PROTOCOL_UDP} mux_protocol_c33;

#endif
