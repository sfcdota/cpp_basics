#ifndef _PONY_HPP_
#define _PONY_HPP_
#include <string>
class Pony{
 public:
  Pony(std::string name, int age, int weight, int length, int height);
  std::string GetName();
  int GetAge();
  double GetWeight();
  double GetLength();
  double GetHeight();
  ~Pony();
 private:
  int age_;
  double weight_;
  double length_;
  double height_;
  std::string name_;
};
#endif
