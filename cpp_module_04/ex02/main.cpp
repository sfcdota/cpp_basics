#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// ISquad* kek = new Squad;
	// kek = vlc;
	// std::cout <<std::endl << "***********KEK SQUAD*************" << std::endl;
	// for (int i = 0; i < kek->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = kek->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// // delete kek;
	// delete vlc;


	// std::cout <<std::endl << "***********HA SQUAD*************" << std::endl;
	// Squad ha;
	// bob = new TacticalMarine;
	// jim = new AssaultTerminator;
	// ha.push(bob);
	// ha.push(jim);
	// for (int i = 0; i < ha.getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = ha.getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }

	// std::cout <<std::endl << "***********KEK2 SQUAD*************" << std::endl;
	// Squad kek2(ha);
	// for (int i = 0; i < kek2.getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = kek2.getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	return 0;
}
