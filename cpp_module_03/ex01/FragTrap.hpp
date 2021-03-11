#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_
#include <string.h>
#include <iostream>
class FragTrap {
 public:
  FragTrap(std::string &name);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void vaulthunter_dot_exe(std::string const & target);
  ~FragTrap();
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
  std::string attack_pool[5];
};
#endif
