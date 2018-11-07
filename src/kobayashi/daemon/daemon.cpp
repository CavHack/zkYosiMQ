#include <gflags/gflags.h>
#include <glog/logging.h>
#include <yaml-cpp/yaml.h>
#include <boost/thread/executor.hpp>
#include <boost/thread/future.hpp>
#include <yosi/src/kobayashi/KobayashiSphereManifold.hpp>
#include <yosi/src/kobayashi/common/TokenStreamID.hpp>
#include <yosi/src/kobayashi/common/YosiPubSub.hpp>
#include <yosi/src/kobayashi/EpochCollection.hpp>
#include <list>

DEFINE_string(ConfigurationPath, "", "YAML's configuration file path");

int main(int argc, char** argv) {
  ::gflags::ParseCommandLineFlags(&argc, &argv, true);

  std::list<boost::future<void>> tasks;

  //Need to parse yaml file and get arguments

  try {
    auto conf = YAML::LoadFile(FLAGS_ConfigurationPath.empty() ? "default_configuration.yaml" : FLAGS_ConfigurationPath);


    /*to-do YOSI GREEDY GRAPH COLORING GOEWS HERE*/

  }



}
