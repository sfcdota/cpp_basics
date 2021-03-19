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
			*this = a;
		}
		Array & operator=(Array const & a)
		{
			if (a == this)
				return *this;
			if (size != a.getSize())
				{
					delete [] arr;
					size = a.getSize();
					arr = new T[size]();
				}
			for (unsigned i = 0; i < size; i++)
				arr[i] = a[i];
		}
		T & operator[](unsigned index)
		{
			if (index < 0 || index >= size)
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
