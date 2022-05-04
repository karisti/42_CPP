/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:40:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/25 12:52:23 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const & cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
	this->_brain = new Brain(*cat.getBrain());
}

Cat&		Cat::operator=(Cat const & cat)
{
	std::cout << "Cat assignement operator called" << std::endl;
	this->_type = cat.getType();
	this->_brain = cat.getBrain();
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat making sound: Miau miau" << std::endl;
}
