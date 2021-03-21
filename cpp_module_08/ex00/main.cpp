#include "easyfind.hpp"
#include <vector>
#include <iterator>
#include <iostream>

int main()
{
	std::vector<int> kek;
	kek.push_back(2);
	kek.push_back(0);
	kek.push_back(1);


	try{
		int haha = easyfind(kek, 2);
		std::cout << "Element found at index " << haha << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}
	try{
		int haha = easyfind(kek, 5);
		std::cout << "Element found at index " << haha << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}

	return 0;
}
