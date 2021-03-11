#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string& name, const std::string& title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &in)
{
	*this = in;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

const Sorcerer& Sorcerer::operator = (const Sorcerer &op)
{
	this->name = op.getName();
	this->title = op.getTitle();
	return *this;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

const std::string& Sorcerer::getName() const
{
	return this->name;
}

const std::string& Sorcerer::getTitle() const
{
	return this->title;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Sorcerer &s)
{
	os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}
