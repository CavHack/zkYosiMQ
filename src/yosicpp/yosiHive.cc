/*
*  Venire Labs Inc 2019 All rights reservedGi
*
*
*/

#include <nonstd/optional.hpp>
#include <glog/logging.h>
#include <boost/asio/connect.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>

using json = nlohmann::json;

namespace {} //namespace

namespace yosicpp {
  nonstd::optional<json> AliquotYosiAPI::post(const json& input) {
    using tcp = boost::asio::ip::tcp;
    namespace http = boost::beast::http;

    boost::asio::io_context ioc;
    boost::system::error_code ec;
    
  }




try {

  auto const results = resolver.resolve(_host, std::to_string(_port));


  boost::asio::connect(socket, results.begin(), results.end());

  http::request<>



}
}
