#include "FragTrap.hpp"
#include <time.h>

FragTrap::FragTrap(std::string &name)
{
	std::cout << "FR4G-TP Constructor called" << std::endl;
	srand(time(NULL));
	attack_pool[0] = "kek0";
	attack_pool[1] = "kek1";
	attack_pool[2] = "kek2";
	attack_pool[3] = "kek3";
	attack_pool[4] = "kek4";
	this->name = name;
	hp = 100;
	max_hp = 100;
	energy_p = 100;
	max_energy_p = 100;
	level = 1;
	melee_damage = 30;
	ranged_damage = 20;
	armor_reduction = 5;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << ranged_damage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount > (unsigned int)(hp + armor_reduction))
		amount = hp;
	hp -= amount;
	std::cout << "FR4G-TP " << name << " take " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount > (unsigned int)(max_hp - hp))
		amount = max_hp - hp;
	hp += amount;
	std::cout << "FR4G-TP " << name << " repaired " << amount << " points of health!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (energy_p < 25)
	{
		std::cout << "Not enough energy!" << std::endl;
		return ;
	}
	energy_p -= 25;
	std::cout << "FR4G-TP " << name << " attacks "<< target << " with screaming " << attack_pool[std::rand() % 5] << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP Destructor called" << std::endl;
}
