#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & in) :
	Form("PresidentialPardonForm", in.getGradeToSign(), in.getGradeToExec()), target(in.getTarget())
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &in)
{
	if (&in == this)
		return *this;
	Form::operator=(in);
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::string const & PresidentialPardonForm::getTarget(void) const
{
	return target;
}

Form * PresidentialPardonForm::clone(std::string const & target) const
{
	return new PresidentialPardonForm(target);
}
