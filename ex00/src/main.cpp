#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vcontainer;

	vcontainer.push_back(10);
	vcontainer.push_back(9);
	vcontainer.push_back(8);
	vcontainer.push_back(7);
	vcontainer.push_back(6);
	vcontainer.push_back(5);
	vcontainer.push_back(4);
	vcontainer.push_back(3);
	vcontainer.push_back(2);
	vcontainer.push_back(1);
	vcontainer.push_back(0);
	std::vector<int>::iterator	it = vcontainer.end();

	try
	{
		it = easyfind(vcontainer, 11);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
