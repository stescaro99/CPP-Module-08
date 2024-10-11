#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
			std::cout << "MutantStack default constructor" << std::endl;
			std::stack<T>();
		}

		MutantStack(const MutantStack &other) : std::stack<T>(other)
		{
			std::cout << "MutantStack copy constructor" << std::endl;
		}

		MutantStack &operator=(const MutantStack &other)
		{
			std::cout << "MutantStack assignation operator" << std::endl;
			if (this != &other)
				std::stack<T>::operator=(other);
			return *this;
		}

		virtual ~MutantStack()
		{
			std::cout << "MutantStack destructor" << std::endl;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return std::stack<T>::c.begin();
		}
		iterator end()
		{
			return std::stack<T>::c.end();
		}
};

#endif