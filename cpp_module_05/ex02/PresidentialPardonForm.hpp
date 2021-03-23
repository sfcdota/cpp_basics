#ifndef _PRESIDENTIALPARDONFORM_HPP_
#define _PRESIDENTIALPARDONFORM_HPP_
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & in);
		PresidentialPardonForm const & operator=(PresidentialPardonForm const &in);
		void execute(Bureaucrat const & executor) const;
		std::string const & getTarget(void) const;
	private:
		PresidentialPardonForm();
		std::string const target;
};
#endif
