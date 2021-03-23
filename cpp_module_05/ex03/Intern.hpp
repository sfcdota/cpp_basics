#ifndef _INTERN_HPP_
#define _INTERN_HPP_
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern (Form *forms[]);
		Intern(Intern const & in);
		Intern & operator=(Intern const & in);
		Form * makeForm(std::string const & type, std::string const & target);
		~Intern();
		class UnknownFormTypeException : public std::exception
		{
			const char* what () const throw()
			{
				return "Unknown form type passed to intern";
			}
		};
	private:
		Intern();
		Form *forms[3];
};
#endif
