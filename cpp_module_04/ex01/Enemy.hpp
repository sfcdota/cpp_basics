#ifndef _ENEMY_HPP_
#define _ENEMY_HPP_
#include <string>
#include <iostream>
class Enemy
{
	private:
		int hp;
		std::string type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & in);
		virtual ~Enemy();
		std::string const & getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
		Enemy & operator=(Enemy const & in);
};
#endif
