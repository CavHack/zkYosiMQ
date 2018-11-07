/*
* Copyright (c) 2019 The Venire Labs Inc
*
*
*
*/


#ifndef YOSICPP_HIVE_H_
#define YOSICPP_HIVE_H_

#include <cstdint>
#include <nonstd/optional.hpp>
#include <string>
#include <utility>
#include <vector>

#include <nlohmann/json_fwd.hpp>

#include "yosicpp/api.h"
#include "yosicpp/api_json.h"

namespace yosicpp {
  //Implementation of YosiJSONAPI.
  class AliquotYosiAPI : virtual public YosikAPI, YosiJsonAPI {

  public:
    //Implementation of YosiJsonAPI class.
    AliquotYosiAPI() = delete;
    AliquotYosiAPI(std::string host, uint32_t port) : _host(std::move(host)), _port(port) {}
    virtual ~AliquoteYosiAPI() {}

  protected:

    nonstd::optional<nlohman::json> post (const nlohmann:json& input) override;

  private:
    const std::string _host;
    const uint32_t _port;


  };

}

#endif
