#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_
#include <iostream>

template <typename T>
class Array{
	public:
		Array (void);
		Array(unsigned int n);
		Array(Array const & a);
		Array & operator=(Array const & a);
		T & operator[](unsigned index);
		unsigned getSize(void) const;
		~Array();
	private:
		T* arr;
		unsigned size;
};
#endif
