/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:55:38 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/29 20:05:23 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"


Character::Character(): _materiaAmount(0), _name("")
{
	for (int i = 0; i < Character::_inventorySize; i++)
		this->_inventory[i] = 0;
}

Character::Character(std::string name): _materiaAmount(0), _name(name)
{
	for (int i = 0; i < Character::_inventorySize; i++)
		this->_inventory[i] = 0;
}

Character::Character(Character const & character)
{
	this->_name = character.getName();
	this->_materiaAmount = character._materiaAmount;
	
	for (int i = 0; i < character._materiaAmount; i++)
		this->_inventory[i] = character._inventory[i];
}

Character::~Character()
{
	for (int i = 0; i < this->_materiaAmount; i++)
		delete this->_inventory[i];
}

Character&	Character::operator=(Character const & character)
{
	for (int i = 0; i < Character::_inventorySize; i++)
	{
		if (i < this->_materiaAmount)
			delete this->_inventory[i];
		this->_inventory[i] = character._inventory[i];
	}

	this->_name = character.getName();
	this->_materiaAmount = character._materiaAmount;

	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_materiaAmount < Character::_inventorySize)
	{
		this->_inventory[this->_materiaAmount] = m;
		this->_materiaAmount++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= Character::_inventorySize || idx >= this->_materiaAmount)
		return ;

	for (int i = idx; i < this->_materiaAmount - 1; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = 0;
	}
	this->_materiaAmount--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= Character::_inventorySize || idx >= this->_materiaAmount)
		return ;
	this->_inventory[idx]->use(target);
}
