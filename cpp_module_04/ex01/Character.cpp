#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	AP = 40;
	this->weapon = nullptr;
}

int Character::getAP() const
{
	return this->AP;
}


Character::~Character()
{

}

void Character::recoverAP()
{
	if (AP + 10 > 49)
		AP = 40;
	else
		AP += 10;
}

void Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}

AWeapon const * Character::getWeapon(void) const
{
	return this->weapon;
}

void Character::attack(Enemy* enemy)
{
	if (!weapon || !enemy || AP < weapon->getAPCost())
		return ;
	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	AP -= weapon->getAPCost();
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() <= 0)
	{	delete enemy;
		enemy->~Enemy();
	}
}

std::string const & Character::getName() const
{
	return this->name;
}

std::ostream & operator<<(std::ostream &os, Character const & c)
{
	os << c.getName() << " has " << c.getAP() << " AP and ";
	if (c.getWeapon() == nullptr)
		os << "is unarmed" << std::endl;
	else
		os << "wields a " << c.getWeapon()->getName() << std::endl;
	return os;
}
