#include "ClapTrap.hpp"
#include <time.h>
ClapTrap::ClapTrap(std::string &name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	srand(time(NULL));
	this->name = name;
	hp = 10;
	max_hp = 10;
	energy_p = 10;
	max_energy_p = 10;
	level = 0;
	melee_damage = 1;
	ranged_damage = 1;
	armor_reduction = 0;
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
