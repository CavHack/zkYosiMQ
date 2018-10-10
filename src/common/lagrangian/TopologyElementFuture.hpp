#include <lagrangian/TopologyElement.hpp>

#ifndef __TopologyElementFuture_HPP
#define __TopologyElementFuture_HPP

namespace lagrangian {


  class TopologyElementFuture {
  public:
    virtual bool test(const TopologyElement&) const = 0;
    virtual ~TopologyElementFuture(){};

  };
} //namespace lagrangian


#endif


