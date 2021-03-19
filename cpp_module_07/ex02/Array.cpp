#include "Array.hpp"


template<typename T>
Array<T>::Array(void)
{
	arr = nullptr;
	size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	arr = new T[n]();
	size = n;
}

template<typename T>
Array<T>::Array(Array const & a)
{
	*this = a;
}

template<typename T>
Array<T> & Array<T>::operator=(Array const & a)
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

template<typename T>
unsigned Array<T>::getSize(void) const
{
	return size;
}

template<typename T>
Array<T>::~Array()
{
	if (arr)
		delete [] arr;
}

template<typename T>
T & Array<T>::operator[](unsigned index)
{
	if (index < 0 || index >= size)
		throw std::exception();
	else
		return arr[index];
}
