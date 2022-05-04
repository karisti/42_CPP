/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:40:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/25 12:22:50 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog & dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog&		Dog::operator=(Dog const & dog)
{
	std::cout << "Dog assignement operator called" << std::endl;
	this->_type = dog.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog making sound: Guau guau" << std::endl;
}
