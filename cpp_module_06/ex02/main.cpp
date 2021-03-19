#include <iostream>
#include <time.h>

class Base{public: virtual ~Base(){};};
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void)
{
	int kek = std::rand() % 3;
	if (kek == 0)
		return new A;
	if (kek == 1)
		return new B;
	return new C;
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	if (dynamic_cast<B*>(p))
		std::cout << "B";
	if (dynamic_cast<C*>(p))
		std::cout << "C";
	std::cout << std::endl;
}

void identify_from_reference( Base & p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch(const std::exception& e){}
	std::cout << std::endl;
}

int main()
{
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		Base *p = generate();
		Base& kek = *p;
		std::cout << "identify from pointer: ";
		identify_from_pointer(p);
		std::cout << "identify from reference: ";
		identify_from_reference(kek);
		delete p;
	}
	return 0;
}
