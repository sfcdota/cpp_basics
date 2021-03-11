#ifndef _TACTICALMARINE_HPP_
#define _TACTICALMARINE_HPP_
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine();
		~TacticalMarine();
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;
		ISpaceMarine* clone(void) const;

};
#endif
