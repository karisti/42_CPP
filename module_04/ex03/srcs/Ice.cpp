/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:41:35 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/29 18:49:15 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"


Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(Ice const & ice): AMateria("ice")
{
	*this = ice;
}

Ice::~Ice()
{
}

Ice&		Ice::operator=(Ice const & ice)
{
	this->_type = ice.getType();
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
