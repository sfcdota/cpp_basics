#ifndef _SQUAD_HPP_
#define _SQUAD_HPP_
#include "ISquad.hpp"

class Squad : public ISquad {
	public:
		Squad();
		Squad(Squad const & in);
		~Squad();
		Squad& operator=(Squad const & in);
		int getCount(void) const;
		ISpaceMarine* getUnit(int n) const;
		int push(ISpaceMarine* spacemarine);
	private:
		int count;
		ISpaceMarine **army;
};
#endif
