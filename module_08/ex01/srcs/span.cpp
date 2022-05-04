/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:29:28 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 14:28:25 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

Span::Span() : _size(0), _vector(0)
{
}

Span::Span(unsigned int size) : _size(size), _vector(0)
{
}

Span::Span(Span const & span) : _size(span._size), _vector(span._vector)
{
}

Span::~Span()
{
}

Span&	Span::operator=(Span const & span)
{
	this->_size = span._size;
	this->_vector = span._vector;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_vector.size() >= this->_size)
		throw std::runtime_error("Index out of bounds");
	this->_vector.push_back(num);
}

int		Span::shortestSpan(void)
{
	if (this->_vector.size() <= 1)
		throw std::runtime_error("No span to find");

	std::vector<int>					sorted = this->_vector;
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = sorted.end();
	int									result;

	std::sort(sorted.begin(), sorted.end());
	result = *(sorted.begin() + 1) - *sorted.begin();
	if (this->_vector.size() == 2)
		return (result);
	for (it = sorted.begin() + 1; it != ite - 1 && result != 0; ++it)
	{
		if ((*(it + 1) - *it) < result)
			result = *(it + 1) - *it;
	}
	return (result);
}

int		Span::longestSpan(void)
{
	if (this->_vector.size() <= 1)
		throw std::runtime_error("No span to find");

	int		max = *std::max_element(this->_vector.begin(), this->_vector.end());
	int		min = *std::min_element(this->_vector.begin(), this->_vector.end());
	return (max - min);
}

