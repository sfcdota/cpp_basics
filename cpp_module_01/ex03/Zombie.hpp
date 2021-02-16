#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_
#include <string>
#include <iostream>

class Zombie {
 public:
  Zombie();
  Zombie(std::string name, std::string type);
  std::string getRandomString();
  void announce();
  ~Zombie();
 private:
  std::string type_;
  std::string name_;
};
#endif
