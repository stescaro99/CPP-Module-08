#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	std::cout << "Vector: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try
	{
		std::cout << "find 5: ";
		std::cout << easyfind(vec, 5) << std::endl;
		std::cout << "find 10: ";
		std::cout << easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}