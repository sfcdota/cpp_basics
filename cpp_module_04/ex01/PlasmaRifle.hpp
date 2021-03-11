#ifndef _PLASMARIFLE_HPP_
#define _PLASMARIFLE_HPP_
#include "AWeapon.hpp"
class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		virtual void attack() const;
		~PlasmaRifle();
};
#endif
