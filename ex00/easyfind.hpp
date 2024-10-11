#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class ValueNotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Value not found";
		}
};

template <typename T>
T easyfind(std::vector<T> &vec, int value)
{
	typename std::vector<T>::iterator it = std::find(vec.begin(), vec.end(), value);
	if (it == vec.end())
		throw ValueNotFoundException();
	return *it;
}

#endif