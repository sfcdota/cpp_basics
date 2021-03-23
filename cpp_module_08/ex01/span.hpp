#ifndef _SPAN_HPP_
#define _SPAN_HPP_
#include <vector>

class Span{
	public:
		Span(unsigned N);
		Span(Span const & s);
		Span & operator=(Span const & s);
		~Span();
		void addNumber(int z);
		int shortestSpan() const;
		int longestSpan() const;
		unsigned getElements() const;
		class SpanNotEnoughNumbersException : public std::exception
		{
			const char* what() const throw()
			{
				return "Not enough numbers to calculate span";
			}
		};
		class AddNumberOutOfLimitException : public std::exception
		{
			const char* what() const throw()
			{
				return "Can't add number. Container out of limit";
			}
		};
		template<typename TIterator>
		void addNumber(TIterator start, TIterator end)
		{
			if (end - start < 0 || nums.capacity() - nums.size() - (end - start) < 0)
				throw Span::AddNumberOutOfLimitException();
			nums.insert(nums.end(), start, end);
		}

	private:
		Span();
		std::vector<int> nums;
		std::vector<int>::const_iterator last;
};
#endif
