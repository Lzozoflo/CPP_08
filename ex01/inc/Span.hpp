/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/27 16:07:17 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <exception>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"

// class NotFoundException: public std::exception
// {
// 	public :
// 		virtual const char* what() const throw() {
// 			return ("Not found.");
// 		}
// };


// template <typename T>
// typename T::iterator	easyfind(T &container, int value)
// {
// 	typename T::iterator it;

// 	it = std::find(container.begin(), container.end(), value);
// 	if (it == container.end())
// 		throw (NotFoundException());
// 	return (it);
// }

class StockCapped : public std::exception
{
	public :
		virtual const char *what() const throw(){
			return  ("Stock Max Reached.");
		}
};

class EmptyVector : public std::exception
{
	public :
		virtual const char *what() const throw(){
			return ("Vector is empty!");
		}
};

class NoDistanceFind : public std::exception
{
	public :
		virtual const char *what() const throw(){
			return ("Need at least two numbers.");
		}
};


class Span
{
	private :
	// {

		/* Canonical */
		Span( void );
		Span(const Span &other);

		size_t	_MaxStock;
		std::vector<int> _vec;

	// }
	public :
	// {

		Span &operator=(const Span &other);
		Span( unsigned int &N );
		~Span( void );

		void	addNumber(int nb);
		void	shortestSpan();
		void	longestSpan();

		/* bonus */
		void	randomFill();
		void	print();
		// void	popNumber();
	// }
};


 #endif
