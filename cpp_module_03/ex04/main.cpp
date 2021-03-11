#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	// std::string name = "ger";
	// std::string name2 = "scav ger";
	// std::string name3 = "clap";
	// std::string name4 = "ninja";
	// FragTrap frag(name);
	// ScavTrap scav(name2);
	// ClapTrap clap(name3);
	// frag.meleeAttack("sky");
	// frag.rangedAttack("air");
	// frag.takeDamage(1000);
	// frag.beRepaired(1000);
	// for(int i = 0; i < 5; i++)
	// 	frag.vaulthunter_dot_exe("space");

	// scav.meleeAttack("sky");
	// scav.rangedAttack("air");
	// scav.takeDamage(1000);
	// scav.beRepaired(1000);
	// for(int i = 0; i < 5; i++)
	// 	scav.challengeNewcomer("space");
	// NinjaTrap ninja(name4);
	// ninja.ninjaShoebox(frag);
	// ninja.ninjaShoebox(scav);
	// ninja.ninjaShoebox(clap);
	// ninja.ninjaShoebox(ninja);
	// ninja.meleeAttack("arm");
	// ninja.rangedAttack("head");

	std::string name5 = "super";
	SuperTrap super(name5);
	super.meleeAttack("kek");
	super.rangedAttack("ha");
	for(int i = 0; i < 5; i++)
		super.vaulthunter_dot_exe("space");
	// ClapTrap *kek = new SuperTrap(name5);
	// delete kek;
	return (0);
}
