#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	// try
	// {
	// 	Bureaucrat bureaucrat("b1", 0);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat bureaucrat(Bureaucrat("b2", 151));
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "*********INC DEC TEST*********" << std::endl;
	// Bureaucrat fine1("fine1", 1);
	// Bureaucrat fine2("fine2", 150);
	// try
	// {
	// 	fine1.incrementGrade();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	fine2.decrementGrade();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "before assign" << std::endl << fine1 << fine2;
	// fine1 = fine2;
	// std::cout << "after assign" << std::endl << fine1 << fine2;

	// Bureaucrat fine3(fine2);
	// std::cout << "fine3:" << fine3;

	// std::cout << "*** INIT TEST ***" << std::endl;
	// try
	// {
	// 	Form("whatever", 0, 20);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Form("whatever", 20, 0);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Form("whatever", 151, 20);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Form("whatever", 20, 151);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Form("whatever", 0, 151);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Form("whatever", 151, 0);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "*** NORMAL TESTS ***" << std::endl;
	// Form budget("budget", 20, 15);
	// Form ultrabudget("ultra budget", 20, 15);
	// Form trash("trash", 50, 50);
	// Form ultratrash("ultra trash", 50, 50);
	// Bureaucrat worker("worker", 25);
	// try
	// {
	// 	budget.beSigned(worker);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	worker.signForm(ultrabudget);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	trash.beSigned(worker);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	worker.signForm(ultratrash);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl << "SOURCE FORMS:" << std::endl << budget << ultrabudget << trash << ultratrash;
	// std::cout << std::endl << "*** ASSIGNATION TEST ***" << std::endl;
	// Form supertrash("super trash", 100, 100);
	// std::cout << "before: " << supertrash;
	// supertrash = trash;
	// std::cout << "after: " << supertrash;
	// std::cout << "copy constructor..." << std::endl;
	// Form kek(supertrash);
	// std::cout << "param: " << supertrash << "var: " << kek;

	// Form *shr = new ShrubberyCreationForm("shr target");
	// Form *rob = new RobotomyRequestForm("rob target");
	// Form *pre = new PresidentialPardonForm("pre target");
	// Bureaucrat worker("worker", 1);
	// worker.signForm(*shr);
	// worker.executeForm(*shr);
	// rob->beSigned(worker);
	// try
	// {
	// 	rob->execute(worker);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	worker.signForm(*pre);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	worker.executeForm(*pre);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	Intern intern;
	Bureaucrat bur("bur", 1);
	try
	{
		Form *rrf = intern.makeForm("robotomy request", "Bender");
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Form *rrf = intern.makeForm("PresidentialPardonForm", "Bender");
	bur.signForm(*rrf);
	bur.executeForm(*rrf);
	delete rrf;
	return 0;
}
