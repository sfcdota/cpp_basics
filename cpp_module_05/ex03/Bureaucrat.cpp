#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade) : name(name)
{
	this->grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & in) : name(in.getName())
{
	*this = in;
}

Bureaucrat::~Bureaucrat()
{

}

int Bureaucrat::getGrade(void) const
{
	return grade;
}

void Bureaucrat::incrementGrade(void)
{
	if(grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	--grade;
}

void Bureaucrat::decrementGrade(void)
{
	if(grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	++grade;
}

std::string const & Bureaucrat::getName(void) const
{
	return name;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & in)
{

	this->grade = in.getGrade();
	return *this;
}

void Bureaucrat::signForm(Form & form)
{
	if (grade > form.getGradeToSign())
		std::cout << name << " cannot sign form " << form.getName()
		<< " because Bureaucrat: Grade too low" << std::endl;
	else
	{
		std::cout << name << " signs form " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}

void Bureaucrat::executeForm(Form & form)
{
	try
	{
		form.execute(*this);
	}
	catch (const std::exception& e)
	{
		std::cout << "Execution by bureaucrat error. " << e.what() << std::endl;
		return ;
	}
	std::cout << name << " has executed form " << form.getName() << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return os;
}
