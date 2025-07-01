#include "Span.hpp"


/* Canonical */
Span::Span( void ) : _MaxStock(0){}
Span::Span(const Span &other) : _MaxStock(other._MaxStock)
{
	if (other._vec.size() != 0){

		size_t vecSize = other._vec.size();
		for (size_t i = 0 ; i != vecSize; ++i)
				this->_vec.push_back(other._vec[i]);

	}
}
Span &Span::operator=(const Span &other)
{
	if (this != &other){
		this->_MaxStock = other._MaxStock;
		size_t vecSize = other._vec.size();
		for (size_t i = 0 ; i != vecSize; ++i)
				this->_vec.push_back(other._vec[i]);
	}
	return *this;
}
Span::~Span( void ){}
/* Canonical */

/*--------------------------*/
Span::Span( unsigned int &N ) : _MaxStock(N){}

void	Span::addNumber(int nb)
{
	if (this->_MaxStock > this->_vec.size()) {
		this->_vec.push_back(nb);
	} else {
		throw StockCapped();
	}
}

#include <limits>

void	Span::shortestSpan()
{

	size_t vecSize = this->_vec.size();

	if (vecSize <= 1)
		throw NoDistanceFind();

	size_t res = std::numeric_limits<size_t>::max();
	for (size_t i = 0; i < vecSize; i++){

		int toCmp = this->_vec[i];

		for (size_t j = 0; j < vecSize; j++){

			if (j != i){
				int	Cmp = this->_vec[j];
				size_t diff = static_cast<size_t>((Cmp > toCmp) ? (Cmp - toCmp) : (toCmp - Cmp));
				if (res > diff)
					res = diff;
			}
		}
	}
	std::cout << "shortest Span : " << res << std::endl;
}

void	Span::longestSpan()
{
	size_t vecSize = this->_vec.size();

	if (vecSize <= 1)
		throw NoDistanceFind();

	size_t res = 0;
	for (size_t i = 0; i < vecSize; i++){

		int toCmp = this->_vec[i];

		for (size_t j = 0; j < vecSize; j++){

			if (j != i){
				int	Cmp = this->_vec[j];
				size_t diff = static_cast<size_t>((Cmp > toCmp) ? (Cmp - toCmp) : (toCmp - Cmp));
				if (res < diff)
					res = diff;
			}
		}
	}
	std::cout << "longest Span : " << res << std::endl;
}
/*--------------------------*/









/* bonus */
void	Span::randomFill()
{
	;
}

void	Span::print()
{
	size_t vecSize = this->_vec.size();
	if (vecSize == 0)
		throw EmptyVector();

	for (size_t i = 0 ; i != vecSize; ++i)
		std::cout << this->_vec[i] << std::endl;
}

// void	Span::popNumber()
// {
// 	;
// }
