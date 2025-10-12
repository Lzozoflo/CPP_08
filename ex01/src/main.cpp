#include <iostream>
#include "Span.hpp"

int main()
{
	try {

		unsigned int N = 3;
		Span t(3);
		// t.print();
		t.addNumber(1);
		t.addNumber(3);
		t.print();

		std::cout << "\nspan2 print" << std::endl;
		Span span2(N);
		span2 = t;
		// span2.print();
		span2.addNumber(8);
		span2.print();
		std::cout << "shortestSpan() " << span2.shortestSpan() << std::endl;
		std::cout << "longestSpan() " << span2.longestSpan() << std::endl;

	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span span3(4);
		span3.addMultiple(5);
		span3.print();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout <<"\nexemple test" << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortestSpan() " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan() " << sp.longestSpan() << std::endl;
	return 0;
}
