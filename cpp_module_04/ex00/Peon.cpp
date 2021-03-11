#include "Peon.hpp"


Peon::Peon(const std::string& name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}
