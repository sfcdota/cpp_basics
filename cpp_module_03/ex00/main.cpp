#include "FragTrap.hpp"

int main()
{
	std::string name = "ger";
	FragTrap ft(name);

	ft.meleeAttack("sky");
	ft.rangedAttack("air");
	ft.takeDamage(1000);
	ft.beRepaired(1000);
	for(int i = 0; i < 5; i++)
		ft.vaulthunter_dot_exe("space");
	return (0);
}
