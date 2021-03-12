#include "RobotomyRequestForm.hpp"
#include <time.h>
RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
	Form("RobotomyRequestForm", 72, 45), target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & in) :
	Form("RobotomyRequestForm", in.getGradeToSign(), in.getGradeToExec()), target(in.getTarget())
{
	srand(time(NULL));
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const &in)
{
	Form::operator=(in);
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "*** SOME DRILLING NOISES ***" << std::endl << target
		<< (rand() % 2 ? " has been robotomized successfully" : " robotomize failed")
			<< std::endl;
}

std::string const & RobotomyRequestForm::getTarget(void) const
{
	return target;
}
