#include "span.hpp"
#include <algorithm>
#include <iostream>
Span::Span(unsigned N)
{
	nums.reserve(N);
}

Span::Span(Span const & s)
{
	*this = s;
}

Span & Span::operator=(Span const & s)
{
	if (&s == this)
		return *this;
	if (nums == s.nums)
		return *this;
	nums = s.nums;
	return *this;
}

Span::~Span()
{

}

void Span::addNumber(int z)
{
	if (nums.size() == nums.capacity())
		throw Span::AddNumberOutOfLimitException();
	nums.push_back(z);
}

int Span::shortestSpan() const
{
	int diff = this->longestSpan();
	std::vector<int> temp = nums;
	std::sort(temp.begin(), temp.end());
	for(std::vector<int>::iterator it = temp.begin() + 1; it != temp.end(); it++)
		diff = std::min(diff, std::abs(*it - *(it - 1)));
	return diff;
}

int Span::longestSpan() const
{
	if(nums.size() <= 1)
		throw Span::SpanNotEnoughNumbersException();
	return *std::max_element(nums.begin(), nums.end()) - *std::min_element(nums.begin(), nums.end());
}
