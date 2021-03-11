#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::string name = "ger";
	std::string name2 = "scav ger";
	FragTrap frag(name);
	ScavTrap scav(name2);
	frag.meleeAttack("sky");
	frag.rangedAttack("air");
	frag.takeDamage(1000);
	frag.beRepaired(1000);
	for(int i = 0; i < 5; i++)
		frag.vaulthunter_dot_exe("space");

	scav.meleeAttack("sky");
	scav.rangedAttack("air");
	scav.takeDamage(1000);
	scav.beRepaired(1000);
	for(int i = 0; i < 5; i++)
		scav.challengeNewcomer("space");
	return (0);
}
