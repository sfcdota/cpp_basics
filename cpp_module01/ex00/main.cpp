#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap()
{
	Pony *pony = new Pony("pony1", 228, 322, 1337, 14);
	std::cout << "On the heap:" << std::endl;
	std::cout << "Name: " << pony->GetName() << std::endl;
	std::cout << "Age: " << pony->GetAge() << std::endl;
	std::cout << "Weight: " << pony->GetWeight() << std::endl;
	std::cout << "Length: " << pony->GetLength() << std::endl;
	std::cout << "Height: " << pony->GetHeight() << std::endl;
	delete pony;
}

void ponyOnTheStack()
{
	Pony pony("pony2", 88, 2345, 5678, 90);
	std::cout << "On the stack:" << std::endl;
	std::cout << "Name: " << pony.GetName() << std::endl;
	std::cout << "Age: " << pony.GetAge() << std::endl;
	std::cout << "Weight: " << pony.GetWeight() << std::endl;
	std::cout << "Length: " << pony.GetLength() << std::endl;
	std::cout << "Height: " << pony.GetHeight() << std::endl;
}

int main()
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
}
