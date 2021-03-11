#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_
#include <string.h>
#include <iostream>

class ScavTrap {
 public:
  ScavTrap(std::string &name);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void challengeNewcomer(std::string const & target);
  ~ScavTrap();
 private:
  int hp;
  int max_hp;
  int energy_p;
  int max_energy_p;
  int level;
  std::string name;
  int melee_damage;
  int ranged_damage;
  int armor_reduction;
  std::string challenge_pool[5];
};

#endif
