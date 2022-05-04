/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 13:53:38 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/18 17:05:39 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const & brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain&		Brain::operator=(Brain const & brain)
{
	std::cout << "Brain assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain.getIdea(i);
	return (*this);
}

void		Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->_ideas[i]);
	return ("");
}
