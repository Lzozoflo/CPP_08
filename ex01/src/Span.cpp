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
Span::Span( unsigned int N ) : _MaxStock(N){}

void	Span::addNumber(int nb)
{
	if (this->_MaxStock > this->_vec.size()) {
		this->_vec.push_back(nb);
	} else {
		throw StockCapped();
	}
}

#include <limits>

size_t	Span::shortestSpan()
{

	size_t vecSize = this->_vec.size();

	if (vecSize <= 1)
		throw NoDistanceFind();

	size_t res = std::numeric_limits<size_t>::max();
	// for (size_t i = 0; i < vecSize; i++){
	// 	for (size_t j = 0; j < vecSize; j++){
	// 		if (j != i){
	// 			int	this->_vec[j] = this->_vec[j];
	// 			size_t diff = static_cast<size_t>((this->_vec[j] > this->_vec[i]) ? (this->_vec[j] - this->_vec[i]) : (this->_vec[i] - this->_vec[j]));
	// 			if (res > diff){
	// 				res = diff;
	// 			}
	// 		}
	// 	}
	// }
	for (std::vector<int>::iterator it1 = this->_vec.begin(); it1 != this->_vec.end(); it1++){
		for (std::vector<int>::iterator it2 = this->_vec.begin(); it2 != this->_vec.end(); it2++){
			if (it1 != it2){
				size_t diff = static_cast<size_t>((*it2 > *it1) ? (*it2 - *it1) : (*it1 - *it2));
				if (res > diff){
					res = diff;
				}
			}
		}
	}
	return (res);
}

size_t	Span::longestSpan()
{
	size_t vecSize = this->_vec.size();

	if (vecSize <= 1)
		throw NoDistanceFind();

	size_t res = 0;

	// for (size_t i = 0; i < vecSize; i++){
	// 	for (size_t j = 0; j < vecSize; j++){
	// 		if (j != i){
	// 			size_t diff = static_cast<size_t>((this->_vec[j] > this->_vec[i]) ? (this->_vec[j] - this->_vec[i]) : (this->_vec[i] - this->_vec[j]));
	// 			if (res < diff){
	// 				res = diff;
	// 			}
	// 		}
	// 	}
	// }

	for (std::vector<int>::iterator it1 = this->_vec.begin(); it1 != this->_vec.end(); it1++){
		for (std::vector<int>::iterator it2 = this->_vec.begin(); it2 != this->_vec.end(); it2++){
			if (it1 != it2){
				size_t diff = static_cast<size_t>((*it2 > *it1) ? (*it2 - *it1) : (*it1 - *it2));
				if (res < diff){
					res = diff;
				}
			}
		}
	}
	return (res);
}
/*--------------------------*/
#include <sstream>
void	Span::addMultiple(unsigned int i)
{
	if (this->_MaxStock > this->_vec.size() && this->_MaxStock >= i && i <= this->_vec.size() - this->_MaxStock){
		this->_vec.insert(this->_vec.begin(), i, 20);
	} else {
		std::ostringstream oss;
		oss << "Error capacity still empty :" << ((this->_vec.size() == 0) ? (this->_MaxStock) : (this->_vec.size() - this->_MaxStock)) ;
		throw std::out_of_range(oss.str());
	}
}

void	Span::print()
{
	size_t vecSize = this->_vec.size();
	if (vecSize == 0)
		throw EmptyVector();

	for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++){
		std::cout << *it << std::endl;
	}
	// for (size_t i = 0 ; i != vecSize; ++i){
	// 	std::cout << this->_vec[i] << std::endl;
	// }
}
