#include "Span.hpp"

Span::Span() : _n(0), _vec()
{
	std::cout << "Span default constructor" << std::endl;
}

Span::Span(unsigned int n) : _n(n), _vec()
{
	std::cout << "Span constructor" << std::endl;
}

Span::Span(const Span &span) : _n(span._n), _vec(span._vec)
{
	std::cout << "Span copy constructor" << std::endl;
}

Span::~Span()
{
	std::cout << "Span default destructor" << std::endl;
}

Span &Span::operator=(const Span &span)
{
	std::cout << "Span assignation operator" << std::endl;
	if (this == &span)
		return *this;
	_n = span._n;
	_vec = span._vec;
	return *this;
}

void Span::addNumber(int number)
{
	if (_vec.size() >= _n)
		throw Span::FullSpanException();
	_vec.push_back(number);
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> vec = _vec;
	std::sort(vec.begin(), vec.end());
	int min = vec[1] - vec[0];
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end() - 1; it++)
	{
		int diff = *(it + 1) - *it;
		if (diff < min)
			min = diff;
	}
	return min;
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> vec = _vec;
	std::sort(vec.begin(), vec.end());
	return vec[vec.size() - 1] - vec[0];
}
