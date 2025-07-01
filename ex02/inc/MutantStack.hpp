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
		MutantStack( void ){}
		MutantStack( const MutantStack &other ) : std::stack<T>(other) {}
		MutantStack &operator=( MutantStack &other ) {
			this->std::stack<T>::operator=(other);
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

		const_iterator cbegin(){
			return (this->c.cbegin());
		}
		const_iterator cend(){
			return (this->c.cend());
		}

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		reverse_iterator rbegin(){
			return (this->c.rbegin());
		}
		reverse_iterator rend(){
			return (this->c.rend());
		}
};
