#include "ScavTrap.hpp"
#include <time.h>

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	srand(time(NULL));
	challenge_pool[0] = "kek challenge 0";
	challenge_pool[1] = "kek challenge 1";
	challenge_pool[2] = "kek challenge 2";
	challenge_pool[3] = "kek challenge 3";
	challenge_pool[4] = "kek challenge 4";
	this->name = name;
	hp = 100;
	max_hp = 100;
	energy_p = 50;
	max_energy_p = 50;
	level = 1;
	melee_damage = 20;
	ranged_damage = 15;
	armor_reduction = 3;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " << name << " attacks " << target << " at range, causing " << ranged_damage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	if (energy_p < 25)
	{
		std::cout << "Not enough energy!" << std::endl;
		return ;
	}
	energy_p -= 25;
	std::cout << "ScavTrap " << name << " attacks "<< target << " with roar " << challenge_pool[std::rand() % 5] << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}
