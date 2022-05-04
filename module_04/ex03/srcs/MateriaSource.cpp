/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:55:36 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/29 20:01:55 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(): _materiaAmount(0)
{
}

MateriaSource::MateriaSource(MateriaSource const & materia)
{
	*this = materia;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & materia)
{
	for (int i = 0; i < this->_materiaAmount; i++)
	{
		if (i < this->_materiaAmount)
			delete this->_materias[i];
		if (i < materia._materiaAmount)
			this->_materias[i] = materia._materias[i]->clone();
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_materiaAmount >= MateriaSource::_materiasSize)
		return ;

	this->_materias[this->_materiaAmount] = materia;
	this->_materiaAmount++;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_materiaAmount; i++)
	{
		if (type == this->_materias[i]->getType())
			return (this->_materias[i]->clone());
	}
	return (0);
}
