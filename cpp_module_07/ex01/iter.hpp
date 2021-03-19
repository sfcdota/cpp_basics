#ifndef _ITER_HPP_
#define _ITER_HPP_

template<typename T>
void iter(T* arr, int length, void func(T const &))
{
	for(int i = 0; i < length; i++)
		func(arr[i]);
}

#endif
