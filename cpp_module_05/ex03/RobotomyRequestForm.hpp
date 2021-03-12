#ifndef _ROBOTOMYREQUESTFORM_HPP_
#define _ROBOTOMYREQUESTFORM_HPP_
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & in);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &in);
		void execute(Bureaucrat const & executor) const;
		std::string const & getTarget(void) const;
		Form * clone(std::string const & target) const;
	private:
		std::string const target;
};
#endif
