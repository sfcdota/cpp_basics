#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::Enemy(Enemy const & in)
{
	*this = in;
}

Enemy::~Enemy()
{

}

std::string const & Enemy::getType() const
{
	return type;
}

int Enemy::getHP() const
{
	return hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return ;
	hp -= damage;
	if (hp < 0)
		hp = 0;
}

Enemy & Enemy::operator=(Enemy const & in)
{
	this->hp = in.getHP();
	this->type = in.getType();
	return *this;
}
