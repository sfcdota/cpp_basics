#include "Victim.hpp"

std::ostream& operator<< (std::ostream &os, const Victim& victim)
{
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return os;
}

Victim::Victim(const std::string& name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

const std::string& Victim::getName() const
{
	return this->name;
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << "  just died for no apparent reason!" << std::endl;
}
