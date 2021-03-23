#ifndef _FORM_HPP_
#define _FORM_HPP_
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form {
	public:
		class GradeTooHighException : public std::exception {
			const char* what() const throw()
			{
				return "Form : Grade too high";
			}
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw()
			{
				return "Form : Grade too low";
			}
		};
		Form(std::string const & name, int grade_to_sign, int grade_to_exec);
		Form(Form const & in);
		Form const & operator=(Form const & in);
		~Form();
		std::string const & getName(void) const;
		bool getIsSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExec(void) const;
		void beSigned(Bureaucrat const & bureaucrat);
	private:
		Form();
		std::string const name;
		bool is_signed;
		int const grade_to_sign;
		int const grade_to_exec;
};
std::ostream & operator<<(std::ostream & os, Form const & form);
#endif
