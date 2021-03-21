#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_
#include <algorithm>
#include <iostream>
template <typename T>
int easyfind(T container, int element)
{
	typename T::iterator it = std::find(std::begin(container), std::end(container), element);
	if (it == std::end(container))
		throw std::exception();
	return *it;
}
#endif
