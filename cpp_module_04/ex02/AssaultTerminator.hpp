#ifndef _ASSAULTTERMINATOR_HPP_
#define _ASSAULTTERMINATOR_HPP_
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator();
		~AssaultTerminator();
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;
		ISpaceMarine* clone(void) const;
	private:
};
#endif
