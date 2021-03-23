#ifndef _ROBOTOMYREQUESTFORM_HPP_
#define _ROBOTOMYREQUESTFORM_HPP_
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & in);
		RobotomyRequestForm const & operator=(RobotomyRequestForm const &in);
		void execute(Bureaucrat const & executor) const;
		std::string const & getTarget(void) const;
	private:
		RobotomyRequestForm();
		std::string const target;
};
#endif
