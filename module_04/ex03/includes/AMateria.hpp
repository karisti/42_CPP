/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:25 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/03 23:31:24 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <string>
#include "./ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string		_type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & amateria);
		virtual	~AMateria();
		AMateria& operator=(AMateria const & amateria);

		std::string const&		getType() const; //Returns the materia type
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target) = 0;
};



#endif
