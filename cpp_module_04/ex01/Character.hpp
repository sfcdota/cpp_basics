#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string name;
		int AP;
		AWeapon *weapon;
	public:
		Character(std::string const & name);
		int getAP(void) const;
		~Character();
		void recoverAP(void);
		void equip(AWeapon* weapon);
		AWeapon const * getWeapon (void) const;
		void attack(Enemy* enemy);
		std::string const & getName(void) const;
};
std::ostream & operator<<(std::ostream &os, Character const & c);
#endif
