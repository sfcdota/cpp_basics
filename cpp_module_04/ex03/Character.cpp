#include "Character.hpp"

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (!inventory[i])
		{
			inventory[i] = m;
			// std::cout << m->getType() << " equipped by " << this->getName() << std::endl;
			break ;
		}
}

void Character::unequip(int idx)
{
	inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx])
		inventory[idx]->use(target);
}

AMateria ** Character::cloneAMateria(void) const
{
	AMateria **clone = new AMateria*[INVENTORY_SIZE];
	for (int i = 0; i < INVENTORY_SIZE; i++)
		clone[i] = inventory[i];
	return clone;
}

Character::Character(std::string const & name)
{
	this->name = name;
	inventory = new AMateria*[INVENTORY_SIZE]();
}

Character::Character(Character const & in)
{
	inventory = nullptr;
	*this = in;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if(inventory[i])
			delete inventory[i];
	delete inventory;
}

Character & Character::operator=(Character const & in)
{
	name = in.getName();
	if (inventory)
	{
		for (int i = 0; i < INVENTORY_SIZE; i++)
			if(inventory[i])
				delete inventory[i];
		delete inventory;
	}
	inventory = in.cloneAMateria();
	return *this;
}
