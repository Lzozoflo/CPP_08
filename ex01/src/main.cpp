#include <iostream>
#include "Span.hpp"

int main()
{
	try {

		unsigned int N = 3;
		Span t(N);
		// t.print();
		t.addNumber(1);
		t.addNumber(3);
		t.print();
		std::cout << "t2 print" << std::endl;

		Span t2(N);
		t2 = t;
		t2.print();
		t2.addNumber(8);
		t2.print();
		t2.longestSpan();
		t2.shortestSpan();


	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
