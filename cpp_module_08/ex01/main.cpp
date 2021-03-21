#include "span.hpp"
#include <iostream>
#include <time.h>
#include <algorithm>

// int getRand()
// {
// 	return std::rand() % 20000;
// }

// int kek()
// {
// 	static int kekwait = -1;
// 	return ++kekwait;
// }

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	// srand(time(NULL));
	// Span testsp = Span(10000);
	// std::vector<int> test(10000);
	// std::generate(test.begin(), test.end(), getRand);
	// testsp.addNumber(test.begin(), test.end());
	// std::cout << testsp.shortestSpan() << std::endl;
	// std::cout << testsp.longestSpan() << std::endl;

	// Span test2 = Span(10000);
	// std::generate(test.begin(), test.end(), kek);
	// test2.addNumber(test.begin(), test.end());
	// std::cout << test2.shortestSpan() << std::endl;
	// std::cout << test2.longestSpan() << std::endl;
}
