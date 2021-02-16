#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_
#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string name);
  void setWeapon(Weapon &weapon);
  void attack();
 private:
  Weapon *weapon_;
  std::string name_;
};
#endif
