#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_
#include <iostream>
#include <string>
class Form;
#include "Form.hpp"

class Bureaucrat {
	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & in);
		virtual ~Bureaucrat();
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		std::string const & getName(void) const;
		Bureaucrat & operator=(Bureaucrat const & in);

		class GradeTooHighException : public std::exception {
			const char* what() const throw ()
			{
				return "Bureaucrat: Grade too high";
			}
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw ()
			{
				return "Bureaucrat: Grade too low";
			}
		};
		void signForm(Form & form);
		void executeForm(Form & form);
	private:
		Bureaucrat();
		std::string const name;
		int grade;
};
std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat);
#endif
