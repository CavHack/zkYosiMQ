/*
* Copyright(c) 2019 The Venire Labs Inc
All Rights reserved
*
*/

#ifndef YOSIC_SERVICE_H_
#define YOSIC_SERVICE_H_

#include <stdlib.h>

#include "yosic/serialization/serializer.h"
#include "common/errors.h"

#ifdef __cplusplus
extern "C {
  #endif

    typedef struct {
      const char* host;
      size_t port;
      int api_version;

    } http_info_t;

typedef struct {
  http_info_t http;
  serializer_t serializer;
  serializer_type_t serializer_type;

} yosi_client_service_t;

retcode_t yosi_client_service_init(yosi_client_service_t* serv);
void yosi_client_service_destroy(yosi_client_service_t* serv);

#ifdef __cplusplus
}
#endif

#endif // YOSIC_SERVICE_H_
