#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name_ << "attacks with his " << weapon_->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	name_ = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	weapon_ = &weapon;
}
