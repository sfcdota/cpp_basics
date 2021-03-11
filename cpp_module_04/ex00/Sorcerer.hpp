#ifndef _SORCERER_HPP_
#define _SORCERER_HPP_
#include "Victim.hpp"
class Sorcerer {
	public:
		Sorcerer(const std::string& name, const std::string& title);
		Sorcerer(const Sorcerer &in);
		const Sorcerer& operator = (const Sorcerer &op);
		const std::string& getName() const;
		const std::string& getTitle() const;
		void polymorph(Victim const &victim) const;
		~Sorcerer();
	private:
		std::string name;
		std::string title;
};
std::ostream & operator<<(std::ostream &os, const Sorcerer &s);
#endif
