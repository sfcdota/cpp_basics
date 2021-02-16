#include <iostream>
#include <string>

int main()
{
	std::string src = "HI THIS IS BRAIN";
	std::string* ptr = &src;
	std::string& ref = src;
	std::cout << "this is ptr: " << *ptr << std::endl << "this is ref: " << ref << std::endl;
	return 0;
}
