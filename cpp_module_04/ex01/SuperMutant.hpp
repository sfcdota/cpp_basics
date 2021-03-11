#ifndef _SUPERMUTANT_HPP_
#define _SUPERMUTANT_HPP_
#include "Enemy.hpp"
class SuperMutant : public Enemy {
	public:
		SuperMutant();
		~SuperMutant();
		virtual void takeDamage(int damage);

};
#endif
