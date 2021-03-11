#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(std::string const & name);
		Character(Character const & in);
		~Character();
		Character & operator=(Character const & in);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria ** cloneAMateria(void) const;
	private:
		AMateria** inventory;
		std::string name;
};
#endif
