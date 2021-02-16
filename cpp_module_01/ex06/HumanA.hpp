#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_
#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string name, Weapon &weapon);
  void attack();
  ~HumanA();
 private:
  Weapon* weapon_;
  std::string name_;
};
#endif
