/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/28 18:03:23 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << ": Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << ": Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << ": Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & clapTrap)
{
	std::cout << this->_name << ": Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap & clapTrap)
{
	std::cout << "ClapTrap assignement operator called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

void		ClapTrap::attack(std::string const & target)
{
	this->_energyPoints -= 10;
	std::cout << "ClapTrap <" << this->_name << "> attack <" << target << ">, causing <" << this->_attackDamage << "> points of damage!" << std::endl;
}
void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "ClapTrap <" << this->_name << "> takes <" << amount << "> damage" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << "ClapTrap <" << this->_name << "> repaired <" << amount << "> damage" << std::endl;
}
