#include "Span.hpp"

int main()
{
	Span span(5);
	try
	{
		for (int i = 0; i < 5; i++)
		{
			int n = rand() % 100;
			span.addNumber(n);
			std::cout << n << " ";
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "longest span: " << span.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
/* 
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);

std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

return 0;
} */ 

/* #include <vector>
int main()
{
	Span sp(5);
	std::vector<int> vec;

	for (int i = 0; i < 5; i++)
		vec.push_back(rand() % 100);
	try
	{
		sp.addNumber(vec.begin(), vec.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "sp: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	return 0;
} */