#include "ClapTrap.hpp"
#include <time.h>
ClapTrap::ClapTrap(std::string &name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	srand(time(NULL));
	this->name = name;
	this->hp = 10;
	this->max_hp = 10;
	this->energy_p = 10;
	this->max_energy_p = 10;
	this->level = 0;
	this->melee_damage = 1;
	this->ranged_damage = 1;
	this->armor_reduction = 0;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > (unsigned int)(hp + armor_reduction))
		amount = hp;
	hp -= amount;
	std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > (unsigned int)(max_hp - hp))
		amount = max_hp - hp;
	hp += amount;
	std::cout << "ClapTrap " << name << " repaired " << amount << " points of health!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}
