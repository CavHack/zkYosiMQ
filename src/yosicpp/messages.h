/*
*
* Copyright (c) 2019 Venire Labs Inc
* All Rights Reserved
*
*/

#ifndef YOSICPP_MESSAGES_H_
#define YOSICPP_MESSAGES_H_

#include <nonstd/optional.hpp>
#include <string>
#include <vector>

namespace yosicpp {
  struct GetTransactionsToApproveResponse {
    std::string trunkTransaction;
    std::string branchTransaction;
    uint32_t duration;
  };

  struct GetNodeInfoResponse {
    std::string appName;
    std::string appVersion;
    uint32_t jreAvailableProcessors;
    uint64_t jreFreeMemory;
    std::string jreVersion;

    uint64_t jreMaxMemory;
    uint64_t jreTotalMemory;
    std::string latestMilestone;
    uint32_t latestMilestoneIndex;

    std::string latestSolidSubtangleMilestone;
    uint32_t latestSolidSubstangleMilestoneIndex;

    utin32t_ neighbors;
    uint32_t packetsQueueSize;
    std::chrono::time_point<std::chrono::system_clock> time;
    uint32_t tips;
    uint32_t transactionsToRequest;

  };

  struct GetInclusionStatesResponse {
    std::vector<bool> states;
    nonstd::optional<std::string> error;
  };
}

#endif //YOSICPP_MESSAGES_H_
