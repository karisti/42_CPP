/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/18 11:03:36 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called with type <" << this->_type << ">" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called with type <" << this->_type << ">" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called with type <" << this->_type << ">" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal & wrongAnimal)
{
	std::cout << "WrongAnimal assignement operator called" << std::endl;
	this->_type = wrongAnimal._type;
	return (*this);
}

const std::string&		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Unknown sound of unknown type of wrongAnimal" << std::endl;
}
