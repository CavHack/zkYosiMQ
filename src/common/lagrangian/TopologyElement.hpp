#include <random>
#include <set>
#include <vector>
#include <NTL/GF2E.h>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/access.hpp>
#include <chrono>
#include <shared_mutex>
#include <unordered_map>
#include<common.h>
#include<std>

#ifndef __Topology_Element_HPP__
#define __Topology_Element_HPP__

namespace lagrangian {


  /* c++11 pseudorandom number generator*/
  extern std::mt19937_64 rng

  /**
   *
   *  @class TopologyElement
   *  @brief Single context NTL instance of an element within a field. 
   *
   *  @todo Implement Contextual-Switch for instance element-wise classification.
   */


  class YosiDB {
  public:
    struct TXRecord {
      std::string hash;
      std::string trunk;
      std::string branch;
      std::chrono::system_clock::time_point timestamp;

      TXRecord() = default;
    };

    nonstd::optional<TXRecord> find(const std::string& hash);

    void put(const TXRecord& tx);
    void removeAgedTxs(uint32_t ageInSeconds);
    
    std::unordered_map<std::string, TXRecord> getTXsMap() const;

    static YosiDB& instance();

  private:
    mutable std::shared_mutex mutex;
    std::unordered_map<std::string, TXRecord> _txs;
    
    YosiDB() = default;
    ~YosiDB() = default;

    YosiDB(const YosiDB&) = delete;
    YosiDB& operator=(const YosiDB&) = delete;
    YosiDB(YosiDB&&) = delete;
    YosiDB& operator =(YosiDB&&) = delete;

  };



  class TopologyElement {
  public:
    /**
     * @brief Default constructor
     */
    TopologyElement() :element_(){};

    /**                                                                            @brief conversion from NTL element                                               
     */
    explicit TopologyElement (const ::NTL::GF2E& e) : element_(NTLoFFF(e)){};

    explicit operator const ::NTL::GF2E()const{ return element_};

    TopologyElement(const TopologyElement& src) : element_(src.element_){};

    /**
     * inverse
     */
    inline TopologyElement inverse()const{
      TopologyElement res;
      FFF::Element dummy = element_;
      FFF::Element::c_inv(dummy, res.element_);
      return res;


    }

    inline static TopologyElement sqr(const TopologyElement& x) {
      return x*x;
    }



    /**operators*/
    friend TopologyElement operator+(const TopologyElement&, const TopologyElement&);
    friend TopologyElement& operator+= (TopologyElement&, const TopologyElement&);
    friend TopologyElement operator-(const TopologyElement&, const TopologyElement&);
    friend TopologyElement operator/(const TopologyElement&, const TopologyElement&);
    friend TopologyElement operator*(const TopologyElement&, const TopologyElement&);
    

    

}



}
