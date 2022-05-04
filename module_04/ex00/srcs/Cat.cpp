/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:40:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/25 12:22:20 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat & cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat&		Cat::operator=(Cat const & cat)
{
	std::cout << "Cat assignement operator called" << std::endl;
	this->_type = cat.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat making sound: Miau miau" << std::endl;
}
