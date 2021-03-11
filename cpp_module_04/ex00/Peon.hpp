#ifndef _PEON_HPP_
#define _PEON_HPP_
#include "Victim.hpp"
class Peon : public Victim {
	public:
		Peon (const std::string& name);
		virtual void getPolymorphed() const;
		virtual ~Peon();
};
#endif
