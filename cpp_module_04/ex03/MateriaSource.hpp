#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria ** store;
};
#endif
