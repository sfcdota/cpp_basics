#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{

}

std::string Brain::identify() const
{
	std::stringstream out;
	out << std::uppercase << this;
	return (out.str());
}

int Brain::getCapacity()
{
	return capacity_;
}

int Brain::getOperPerMinute()
{
	return operations_per_minute_;
}

Brain::~Brain()
{

}
