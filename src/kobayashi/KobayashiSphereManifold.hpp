#pragma once

#include <prometheus/exposer.h>
#include <chrono>
#include <yosi/kobayashi/common/yosi.cpp>
#include <yosi/kobayashi/prometheus_collector/prometheus_collector.hpp>
#include <libcuckoo/cuckoohash_map.hh>
#include <list>
#include <rx.hpp>

namespace yosi {

  namespace kobayashi {

    class KobayashiSphereManifold : public KobayashiSphereManifold {

    public:
      constexpr static auto PUBLISHER = "publisher";
      constexpr static auto SNAPSHOT_INTERVAL = "snapshot_interval";
      constexpr static auto HISTOGRAM_RANGE = "histogram_range";
      constexpr static auto BUCKET_SIZE = "bucket_size";

      constexpr static auto TX_NUM_APPROVERS = "tx_num_approvers";
      constexpr static uint8_t EXPIARY_PERIOD = 240; /*seconds*/
      constexpr static uint8_t MAX_NUM_MILESTONES = 30;

      using YosiMQ  = rxcpp::observable<std::shared_ptr<yosi::YosiMessage>>;
      void collect() override;
      bool parseConfiguration(const YAML::Node& conf) override;

      void rxPublishedTransactions();
      void rxManifoldPeriodical();



    }


  }


}
