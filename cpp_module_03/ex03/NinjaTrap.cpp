#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "NinjaTrap Constructor called" << std::endl;
	this->name = name;
	hp = 60;
	max_hp = 60;
	energy_p = 120;
	max_energy_p = 120;
	level = 1;
	melee_damage = 60;
	ranged_damage = 5;
	armor_reduction = 0;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &nj)
{
	std::cout << "self damage to NinjaTrap 15 damage :(" << std::endl;
	nj.takeDamage(5);
}

void NinjaTrap::ninjaShoebox(ClapTrap &ct)
{
	std::cout << "shoebox on ClapTrap with 10 damage!" << std::endl;
	ct.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(FragTrap &ft)
{
	std::cout << "shoebox on FragTrap with 15 damage!" << std::endl;
	ft.takeDamage(15);
}

void NinjaTrap::ninjaShoebox(ScavTrap &st)
{
	std::cout << "shoebox on ScavTrap with 20 damage!" << std::endl;
	st.takeDamage(20);

}

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << name << " attacks " << target << " at range, causing " << ranged_damage << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
		std::cout << "NinjaTrap " << name << " attacks " << target << " at melee, causing " << melee_damage << " points of damage!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called" << std::endl;

}
