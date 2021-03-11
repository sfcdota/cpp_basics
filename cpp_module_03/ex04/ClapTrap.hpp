#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_
#include <string.h>
#include <iostream>

class ClapTrap{
 public:
  ClapTrap(std::string &name);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  virtual ~ClapTrap();
  protected:
  int hp;
  int max_hp;
  int energy_p;
  int max_energy_p;
  int level;
  std::string name;
  int melee_damage;
  int ranged_damage;
  int armor_reduction;
};
#endif
