#ifndef _ZOMBIEHORDE_HPP_
#define _ZOMBIEHORDE_HPP_
#include "Zombie.hpp"
#include <iostream>

class ZombieHorde {
 public:
  ZombieHorde(int n);
  void announce();
  ~ZombieHorde();
 private:
  Zombie *zombies_;
  int zombie_count_;
};
#endif
