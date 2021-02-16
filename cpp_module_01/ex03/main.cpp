#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
	ZombieHorde* zombieHorde = new ZombieHorde(20);
	zombieHorde->announce();
	delete zombieHorde;
	return 0;
}
