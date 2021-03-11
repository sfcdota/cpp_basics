#ifndef _ICE_HPP_
#define _ICE_HPP_
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
		virtual ~Ice();
	private:

};
#endif
