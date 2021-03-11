#ifndef _VICTIM_HPP_
#define _VICTIM_HPP_
#include <string>
#include <iostream>
class Victim {
	public:
		Victim(const std::string& name);
		const std::string& getName() const;
		virtual void getPolymorphed() const;
		virtual ~Victim();
	protected:
		std::string name;
};
std::ostream& operator<< (std::ostream &os, const Victim& victim);
#endif
