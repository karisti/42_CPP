/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/18 11:26:04 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(): _type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called with type <" << this->_type << ">" << std::endl;
}

Animal::Animal(const Animal & animal)
{
	std::cout << "Animal copy constructor called with type <" << this->_type << ">" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called with type <" << this->_type << ">" << std::endl;
}

Animal&	Animal::operator=(const Animal & animal)
{
	std::cout << "Animal assignement operator called" << std::endl;
	this->_type = animal._type;
	return (*this);
}

const std::string&		Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Unknown sound of unknown type of animal" << std::endl;
}
