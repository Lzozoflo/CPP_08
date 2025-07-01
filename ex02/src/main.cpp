#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> test;
	test.push(3);
	test.push(1);
	test.push(2);
	test.push(4);
	test.push(5);
	test.push(6);
	std::cout << test.size() << std::endl;
	test.pop();

	MutantStack<int>::iterator it = test.begin();
	std::cout << *it << std::endl;

}
