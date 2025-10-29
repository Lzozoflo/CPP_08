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


class Span
{
	private :
	// {

		/* Canonical */
		Span( void );

		size_t	_MaxStock;
		std::vector<int> _vec;

		// }
		public :
		// {

		Span &operator=(const Span &other);
		Span(const Span &other);
		Span( unsigned int N );
		~Span( void );

		void	addNumber(int nb);
		size_t	shortestSpan();
		size_t	longestSpan();
		void	addMultiple(unsigned int i, std::vector<int> &vec_to_insert);

		/* bonus */
		void	addMultiple(unsigned int i, int value);
		void	print();

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

	// }
};


 #endif
