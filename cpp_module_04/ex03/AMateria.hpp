#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
