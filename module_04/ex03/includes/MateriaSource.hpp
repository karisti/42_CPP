/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:18:57 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/29 20:10:13 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "../includes/IMateriaSource.hpp"


class MateriaSource: public IMateriaSource
{
	private:
		static const int	_materiasSize = 4;

		AMateria			*_materias[MateriaSource::_materiasSize];
		int					_materiaAmount;

	public:
		MateriaSource();
		MateriaSource(MateriaSource const & materia);
		virtual	~MateriaSource();

		MateriaSource	&operator=(MateriaSource const & materia);

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const & type);
};

#endif
