#ifndef _ZOMBIEEVENT_HPP_
#define _ZOMBIEEVENT_HPP_

class ZombieEvent {
 public:
  ZombieEvent();
  void setZombieType();
  Zombie* newZombie(std::string name);
  void randomChump();
  ~ZombieEvent();
};
#endif
