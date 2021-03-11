#ifndef _NINJATRAP_HPP_
#define _NINJATRAP_HPP_
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
 public:
  NinjaTrap(std::string &name);
  void ninjaShoebox (NinjaTrap &nj);
  void ninjaShoebox (ClapTrap &ct);
  void ninjaShoebox (FragTrap &ft);
  void ninjaShoebox (ScavTrap &st);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  ~NinjaTrap();
 private:

};
#endif
