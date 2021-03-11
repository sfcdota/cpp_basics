#ifndef _WARRIOR_HPP_
#define _WARRIOR_HPP_
#include "Victim.hpp"
class Warrior : public Victim {
	public:
		Warrior (const std::string& name);
		virtual void getPolymorphed() const;
		virtual ~Warrior();
};
#endif
