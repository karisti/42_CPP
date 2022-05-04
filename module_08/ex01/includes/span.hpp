/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:11:33 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/17 18:35:28 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_vector;
	public:
		Span();
		Span(unsigned int size);
		Span(Span const & span);
		~Span();
		Span&	operator=(Span const & span);
		void	addNumber(int num);
		int		shortestSpan(void);
		int		longestSpan(void);

		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end)
		{
			if (this->_size < this->_vector.size() + std::distance(begin, end))
				throw std::runtime_error("Too much numbers!");
			std::copy(begin, end, std::back_inserter(this->_vector));
		};
};

#endif


