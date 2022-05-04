/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:40:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/24 20:24:08 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << ": ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << this->_name << ": ScavTrap Name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << ": ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	this->_energyPoints -= 10;
	std::cout << "ScavTrap <" << this->_name << "> attack <" << target << ">, causing <" << this->_attackDamage << "> points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << this->_name << "> have enterred in Gate keeper mode" << std::endl;
}
