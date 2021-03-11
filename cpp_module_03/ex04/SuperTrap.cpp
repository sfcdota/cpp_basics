#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string &name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << "SuperTrap Constructor called" << std::endl;
	hp = FragTrap::hp;
	max_hp = FragTrap::max_hp;
	energy_p = 120;
	max_energy_p = 120;
	level = 1;
	melee_damage = 60;
	ranged_damage = FragTrap::ranged_damage;
	armor_reduction = FragTrap::armor_reduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called" << std::endl;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
