#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand(time(NULL));
	zombie_count_ = n;
	zombies_ = new Zombie[n]();
}

void ZombieHorde::announce()
{
	for (int i = 0; i < zombie_count_; i++)
		zombies_[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete [] zombies_;
}
