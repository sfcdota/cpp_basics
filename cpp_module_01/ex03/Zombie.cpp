#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	name_ = name;
	type_ = type;
}

void Zombie::announce()
{
	std::cout << name_ << ' ' << type_ << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{

}

Zombie::Zombie()
{
	name_ = getRandomString();
	type_ = getRandomString();
}

std::string Zombie::getRandomString()
{
	int length = rand() % 20 + 4;
	std::string name;
	name.resize(length);
	for (int i = 0; i < length; i++)
		name[i] = 65 + rand() % 2 * 32 + rand() % 26;
	return name;
}
