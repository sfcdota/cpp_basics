#include "Intern.hpp"


Intern::Intern(Intern const & in)
{
	(void)in;
	forms[0] = new ShrubberyCreationForm("");
	forms[1] = new RobotomyRequestForm("");
	forms[2] = new PresidentialPardonForm("");
}

Intern & Intern::operator=(Intern const & in)
{
	if (&in == this)
		return *this;
	return *this;
}

Form * Intern::makeForm(std::string const & type, std::string const & target)
{
	for(int i = 0; i < 3; i++)
		if(type == forms[i]->getName())
			return forms[i]->clone(target);
	throw Intern::UnknownFormTypeException();
}

Intern::~Intern()
{
	delete forms[0];
	delete forms[1];
	delete forms[2];
}

Intern::Intern(Form *forms[])
{
	this->forms[0] = forms[0];
	this->forms[1] = forms[1];
	this->forms[2] = forms[2];
}
