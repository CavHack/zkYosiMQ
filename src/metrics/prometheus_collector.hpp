#pragma once

#include<prometheus/exposer>
#include<metrics/collector/collector.hpp>
#include <string>

namespace zkYosiMQ {

  namespace metrics {

    class PrometheusCollector : public CollectorBase {
    public:
      constexpr static auto PROMETHEUS_EXPOSER_URI = "prometheus_exposer_uri";
      //typedefs
      typedef std::map<std::string, std::reference_wrapper<
				      prometheus::Family<prometheus::Counters>>>

					CountersMap;

      typedef


}


 }
}
