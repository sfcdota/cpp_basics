#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
	ZombieEvent event;
	event.setZombieType("warrior");
	Zombie* zombie = event.newZombie("vasya");
	zombie->announce();
	delete zombie;
	event.randomChump();
	return 0;
}
