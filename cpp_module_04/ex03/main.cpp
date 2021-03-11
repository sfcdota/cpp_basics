#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;


	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// Character me("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me.equip(tmp);
	// tmp = src->createMateria("cure");
	// me.equip(tmp);
	// Character bob("bob");
	// me.use(0, bob);
	// me.use(1, bob);
	// Character copybob = bob;
	// copybob.use(0, me); // does nothing
	// copybob.equip(src->createMateria("ice"));
	// copybob.use(0, me);
	// delete src;
	return 0;
}
