/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/04 14:46:37 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type): _type(type)
{
}

AMateria::AMateria(AMateria const & amateria)
{
	*this = amateria;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const & amateria)
{
	this->_type = amateria._type;
	return (*this);
}

std::string const&		AMateria::getType() const
{
	return (this->_type);
}
