#ifndef LAGRANGIAN_LORENTZ_SPACE_HPP__
#define LAGRANGIAN_LORENTZ_SPACE_HPP__

#include "QuantumFSM.hpp"
#include "lagrangian/cp-fold.hpp

/**
*  @class LorentzSp

*
**/"

class LorentzSp :  public QuantumFSM {

  LorentzSp(const std::vector<TopologyElement>& posetIndex, const TopologyElement stringGraph = zero() );

  /**
   *   @brief Element Selection polling.
   *   @param posterior predicate.
       @return TRUE iff Element exists
   *
   *
   */

  bool exist(const std::unique_ptr<const TopologyElementEntropy>& ent)const;
  size_t size() const;
  const UnivariateTopology& vanishingTopos() const;

}
