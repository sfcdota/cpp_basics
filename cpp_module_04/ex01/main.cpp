#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	// AWeapon* ha = new PlasmaRifle();
	// Character* kek = new Character("kek");
	// Enemy *supermutant = new SuperMutant();
	// kek->equip(ha);
	// std::cout << *kek;

	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->recoverAP();
	// kek->recoverAP();
	// kek->recoverAP();
	// kek->recoverAP();

	// kek->attack(supermutant);
	// kek->attack(supermutant);

	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);
	// kek->attack(supermutant);

	return 0;
}
