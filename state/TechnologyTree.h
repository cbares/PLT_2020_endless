// Generated by dia2code
#ifndef STATE__TECHNOLOGYTREE__H
#define STATE__TECHNOLOGYTREE__H


namespace state {
  class TechID;
}

#include "TechID.h"

namespace state {

  /// class TechnologyTree - 
  class TechnologyTree {
    // Associations
    // Attributes
  private:
    TechID tech;
    // Operations
  public:
    void research (TechID technology);
    // Setters and Getters
  };

};

#endif
