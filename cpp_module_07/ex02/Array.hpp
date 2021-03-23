#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_
#include <iostream>

template <typename T>
class Array{
	public:
		Array (void)
		{
			arr = nullptr;
			size = 0;
		}
		Array(unsigned int n)
		{
			arr = new T[n]();
			size = n;
		}
		Array(Array const & a)
		{
			arr = nullptr;
			size = 0;
			*this = a;
		}
		Array & operator=(Array const & a)
		{
			if (&a == this)
				return *this;
			if (size != a.getSize())
				{
					if (arr)
						delete [] arr;
					size = a.getSize();
					arr = new T[size]();
				}
			for (unsigned i = 0; i < size; i++)
				arr[i] = a[i];
			return *this;
		}
		T & operator[](unsigned index)
		{
			if (index >= size)
				throw std::exception();
			else
				return arr[index];
		}
		T const & operator[](unsigned index) const
		{
			if (index >= size)
				throw std::exception();
			else
				return arr[index];
		}
		unsigned getSize(void) const
		{
			return size;
		}
		~Array()
		{
			if (arr)
				delete [] arr;
		}
	private:
		T* arr;
		unsigned size;
};

#endif
