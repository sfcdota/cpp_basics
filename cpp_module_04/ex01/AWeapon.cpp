#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon()
{

}

std::string const & AWeapon::getName() const
{
	return name;
}

int AWeapon::getAPCost() const
{
	return apcost;
}

int AWeapon::getDamage() const
{
	return damage;
}

AWeapon::AWeapon(AWeapon& weapon)
{
	*this = weapon;
}

AWeapon& AWeapon::operator=(const AWeapon& weapon)
{
	name = weapon.getName();
	apcost = weapon.getAPCost();
	damage = weapon.getDamage();
	return *this;
}
