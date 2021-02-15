#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_
#include <string>

class Zombie {
 public:
  Zombie();
  void announce();
  ~Zombie();
 private:
  std::string type_;
  std::string name_;
}
#endif
