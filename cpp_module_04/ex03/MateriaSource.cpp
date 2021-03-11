#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	store = new AMateria*[INVENTORY_SIZE]();
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
		if(store[i])
			delete store[i];
	delete store;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	for(int i = 0; i < INVENTORY_SIZE; i++)
		if(!store[i])
		{
			store[i] = materia;
			// std::cout << "learned " << materia->getType() << " materia with i = " << i << std::endl;
			return ;
		}
		else if (store[i] == materia)
				return;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
		if(store[i]->getType() == type)
			return store[i]->clone();
	return nullptr;
}
