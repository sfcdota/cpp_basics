#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
 public:
  FragTrap(std::string &name);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void vaulthunter_dot_exe(std::string const & target);
  ~FragTrap();
 private:
  std::string attack_pool[5];
};
#endif
