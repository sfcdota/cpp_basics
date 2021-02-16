#ifndef _HUMAN_HPP_
#define _HUMAN_HPP_
#include "Brain.hpp"
class Human {
 public:
  Human();
  const Brain& getBrain();
  std::string identify() const;
  ~Human();
  private:
   Brain* brain_;
};
#endif
