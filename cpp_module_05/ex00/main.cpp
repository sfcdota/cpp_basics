#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("b1", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureaucrat(Bureaucrat("b2", 151));
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "*********INC DEC TEST*********" << std::endl;
	Bureaucrat fine1("fine1", 1);
	Bureaucrat fine2("fine2", 150);
	try
	{
		fine1.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		fine2.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "before assign" << std::endl << fine1 << fine2;
	fine1 = fine2;
	std::cout << "after assign" << std::endl << fine1 << fine2;

	Bureaucrat fine3(fine2);
	std::cout << "fine3:" << fine3;
	return 0;
}
