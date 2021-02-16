#include "Human.hpp"

Human::Human()
{
	brain_ = new Brain();
}

const Brain& Human::getBrain()
{
	return *brain_;
}

std::string Human::identify() const
{
	return brain_->identify();
}

Human::~Human()
{
	delete brain_;
}
