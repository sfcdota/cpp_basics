#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
	Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & in) :
	Form("ShrubberyCreationForm", in.getGradeToSign(), in.getGradeToExec()), target(in.getTarget())
{

}

ShrubberyCreationForm const & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &in)
{
	if (&in == this)
		return *this;
	Form::operator=(in);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream out;
	std::string filename = target;
	out.open(filename.append("_shrubbery"), std::ofstream::out | std::ofstream::trunc);
	if (!out)
	{
		std::cout << "Open dest file error" << std::endl;
		return ;
	}
	std::string tree = "   *\n  ***\n *****\n*******\n";
	out << tree << tree << "   *\n   *\n";
}

std::string const & ShrubberyCreationForm::getTarget(void) const
{
	return target;
}
