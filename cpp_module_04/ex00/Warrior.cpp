#include "Warrior.hpp"
Warrior::Warrior(const std::string& name) : Victim(name)
{
	std::cout << "Hello guys :)" << std::endl;
}

void Warrior::getPolymorphed() const
{
	std::cout << name << " has been turned to a worm" << std::endl;
}

Warrior::~Warrior()
{
	std::cout << "Bye-bye guys :(" << std::endl;
}
