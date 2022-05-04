/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:40:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/18 17:05:14 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const & dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
	this->_brain = new Brain(*dog.getBrain());
}

Dog&		Dog::operator=(Dog const & dog)
{
	std::cout << "Dog assignement operator called" << std::endl;
	this->_type = dog.getType();
	this->_brain = dog.getBrain();
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog making sound: Guau guau" << std::endl;
}
