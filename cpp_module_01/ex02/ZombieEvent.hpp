#ifndef _ZOMBIEEVENT_HPP_
#define _ZOMBIEEVENT_HPP_
#include "Zombie.hpp"

class ZombieEvent {
 public:
  ZombieEvent();
  void setZombieType(std::string type);
  std::string getRandomString();
  Zombie* newZombie(std::string name);
  void randomChump();
  ~ZombieEvent();
 private:
  std::string stored_type_;
};
#endif
