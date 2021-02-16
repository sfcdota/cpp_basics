#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_
#include <iostream>
class Brain {
 public:
  Brain();
  std::string identify() const;
  int getCapacity();
  int getOperPerMinute();
  ~Brain();
 private:
  int capacity_;
  int operations_per_minute_;
};
#endif
