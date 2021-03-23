#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & in);
		ShrubberyCreationForm const & operator=(ShrubberyCreationForm const &in);
		void execute(Bureaucrat const & executor) const;
		std::string const & getTarget(void) const;
	private:
		ShrubberyCreationForm();
		std::string const target;
};
#endif
