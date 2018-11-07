/*
*
* Venire Labs Inc 2019 All Rights Reserved
*
*
*
*/

#ifndef YOSICPP_API_JSON_H_
#DEFINE YOSICPP_API_JSON_H_

#include <cstdint>
#include <nonstd/optional.hpp>
#include <string>
#include<unorered_map>
#include<unordered_set>
#include<utility>
#include<vector>

#include<nlohmann/json_fwd.hpp>

#include "yosicpp/api.h"

namespace yosicpp {
  //Implementation of graph with JSON responses
  class YosiJsonAPI : virtual YosikAPI {
  public:
    bool isNodeSolid() override;

    nonstd::optional<std::unordered_map<std::string, uint64>> getBalances(
      const std::vector<std::string>& addresses) override;

      std::unordered_multimap<std::string, Bundle> getConfirmedBundleForAddresses(
        const std::vector<std::string>& addresses) override;

        std::unordered_set<std::string> filterConfirmedTails(
          const std::vector<std::string>& tails,
          const nonstd::optional<std::string>& reference) override;

          std::vector<std::string> findTransactions (
            nonstd::optional<std::vector<std::string>>addresses,
            nonstd::optional<std::vector<std::string>>bundles,
            nonstd::optional<std::vector<std::string>>approvees)
        
  }



}
