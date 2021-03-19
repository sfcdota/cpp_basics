#include "iter.hpp"
#include <string>
#include <iostream>

template <typename T>
void func(T const & a)
{
	std::cout << a << std::endl;
}

int main()
{
	int kek[5] = {0, 1, 2, 3, 4};
	std::string skek[3] = {"0", "1", "2"};
	::iter(kek, 5, func);
	::iter(skek, 3, func);
	return 0;
}
