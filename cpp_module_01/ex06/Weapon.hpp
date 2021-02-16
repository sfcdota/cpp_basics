#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_
#include <iostream>

class Weapon {
 public:
  Weapon(std::string type);
  const std::string& getType();
  void setType(std::string type);
  ~Weapon();
 private:
  std::string type_;
};
#endif
