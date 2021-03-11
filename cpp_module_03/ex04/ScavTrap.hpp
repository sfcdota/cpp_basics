#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
 public:
  ScavTrap(std::string &name);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void challengeNewcomer(std::string const & target);
  ~ScavTrap();
 private:
  std::string challenge_pool[5];
};

#endif
