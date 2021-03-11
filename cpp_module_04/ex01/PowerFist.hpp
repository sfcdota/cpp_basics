#ifndef _POWERFIST_HPP_
#define _POWERFIST_HPP_
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		virtual void attack() const;
		~PowerFist();
};
#endif
