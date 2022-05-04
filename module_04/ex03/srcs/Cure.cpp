/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:48:25 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/29 18:55:05 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"


Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const & cure): AMateria("cure")
{
	*this = cure;
}

Cure::~Cure()
{
}

Cure&		Cure::operator=(Cure const & cure)
{
	this->_type = cure.getType();
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
