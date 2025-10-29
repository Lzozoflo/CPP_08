/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:22:42 by fcretin           #+#    #+#             */
/*   Updated: 2025/07/01 14:04:03 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void ) {}
		MutantStack( const MutantStack &other ) : std::stack<T>(other) {}
		MutantStack &operator=( MutantStack &other ) {
			if (this != &other)
				this->std::stack<T>::operator=(other);
			return (*this);
		}
		~MutantStack( void ) {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(){
			return (this->c.begin());
		}

		iterator end(){
			return (this->c.end());
		}

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		const_iterator cbegin() const {
			return (this->c.begin());
		}
		const_iterator cend() const {
			return (this->c.end());
		}

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		reverse_iterator rbegin(){
			return (this->c.rbegin());
		}
		reverse_iterator rend(){
			return (this->c.rend());
		}
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		const_reverse_iterator rbegin() const {
			return (this->c.rbegin());
		}
		const_reverse_iterator rend() const {
			return (this->c.rend());
		}
};
