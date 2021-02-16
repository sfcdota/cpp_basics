#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
}

void ZombieEvent::setZombieType(std::string type)
{
	stored_type_ = type;
}

std::string ZombieEvent::getRandomString()
{
	int length = rand() % 20 + 4;
	std::string name;
	name.resize(length);
	for (int i = 0; i < length; i++)
		name[i] = 65 + rand() % 2 * 32 + rand() % 26;
	return name;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, stored_type_));
}

void ZombieEvent::randomChump()
{
	setZombieType(getRandomString());
	Zombie *temp = newZombie(getRandomString());
	temp->announce();
	delete temp;
}

ZombieEvent::~ZombieEvent()
{

}
