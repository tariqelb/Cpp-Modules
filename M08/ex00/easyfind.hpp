#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

template <typename T>
int	easyfind(T& v, int find)
{
	typename T::iterator it;
	
	it = std::find(v.begin(), v.end(), find);
	if (it != v.end())
		return (*it);
	else
		throw(std::exception());
}
/*
https://stackoverflow.com/questions/20934311/c-template-stdvectoriterator-error
std::vector<T>::iterator is a dependent name, so you need a typename here to specify that it refers to a type. Otherwise it is assumed to refer to a non-type:*/

#endif
