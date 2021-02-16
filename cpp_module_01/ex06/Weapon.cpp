#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return type_;
}

void Weapon::setType(std::string type)
{
	type_ = type;
}

Weapon::~Weapon()
{

}

Weapon::Weapon(std::string type)
{
	type_ = type;
}
