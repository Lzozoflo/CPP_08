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
	std::cout << test.size() << std::endl;//
	test.pop();

	std::cout << std::endl;
	for (MutantStack<int>::iterator itr = test.begin(); itr != test.end(); itr++){
		std::cout << *itr << std::endl;//
	}
	// std::cout << std::endl;
	// for (MutantStack<int>::const_iterator itr = test.begin(); itr != test.end(); itr++){
	// 	std::cout << *itr << std::endl;//
	// }


	std::cout << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;//
	mstack.pop();
	std::cout << mstack.size() << std::endl;//
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "\niterator";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;//
		++it;
	}
	std::cout << "\nconst_iterator";
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	++cit;
	--cit;
	std::cout << std::endl;
	while (cit != cite)
	{
		std::cout << *cit << std::endl;//
		++cit;
	}
	std::cout << "\nreverse_iterator";
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	++rit;
	--rit;
	std::cout << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;//
		++rit;
	}
	std::cout << "\nconst_reverse_iterator";
	MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.rend();
	++crit;
	--crit;
	std::cout << std::endl;
	while (crit != crite)
	{
		std::cout << *crit << std::endl;//
		++crit;
	}
	std::stack<int> s(mstack);

	MutantStack<int> equal(mstack);
	equal.push(4444);
	it = equal.begin();
	ite = equal.end();
	++it;
	--it;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;//
		++it;
	}

	return 0;
}
