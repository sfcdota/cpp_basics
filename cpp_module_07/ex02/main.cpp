#include "Array.hpp"
#include <time.h>
int main()
{
	std::srand(time(NULL));
	Array<int> a(11);
	for (unsigned i = 0; i < a.getSize(); i++)
		a[i] = std::rand() % 10;
	std::cout << "size = " << a.getSize() << std::endl;
	for (unsigned i = 0; i < a.getSize(); i++)
		std::cout << "arr[" << i << "] = " << a[i] << std::endl;
	Array<int> b(a);
	for (unsigned i = 0; i < b.getSize(); i++)
		std::cout << "arr[" << i << "] = " << b[i] << std::endl;
	Array<int> c = b;
	for (unsigned i = 0; i < c.getSize(); i++)
		std::cout << "arr[" << i << "] = " << c[i] << std::endl;
	return 0;
}
