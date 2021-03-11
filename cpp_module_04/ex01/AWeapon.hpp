#ifndef _AWEAPON_HPP_
#define _AWEAPON_HPP_
#include <string>
#include <iostream>
class AWeapon
{
	private:
		std::string name;
		int damage;
		int apcost;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		std::string const & getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
		AWeapon(AWeapon& weapon);
		AWeapon& operator=(const AWeapon& weapon);
};
#endif
