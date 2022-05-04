/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:11:33 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 14:57:52 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack <T> const & mutantStack) : std::stack<T>(mutantStack) {};
		virtual ~MutantStack() {};

		MutantStack&	operator=(MutantStack const & mutantStack)
		{
			std::stack<T>::operator=(mutantStack);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator					begin() { return this->c.begin(); };
		iterator					end() { return this->c.end(); };

		const_iterator				cbegin() { return this->c.cbegin(); };
		const_iterator				cend() { return this->c.cend(); };

		reverse_iterator			rbegin() { return this->c.rbegin(); };
		reverse_iterator			rend() { return this->c.rend(); };

		const_reverse_iterator		crbegin() { return this->c.crbegin(); };
		const_reverse_iterator		crend() { return this->c.crend(); };
};

#endif


