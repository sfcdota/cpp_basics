#ifndef _CURE_HPP_
#define _CURE_HPP_
#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
		virtual ~Cure();
};
#endif
