/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:25 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/03 23:31:24 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "../includes/Brain.hpp"

class Animal
{
	protected:
		std::string		_type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & animal);
		virtual ~Animal();
		Animal&				operator=(Animal const & animal);
		const std::string&	getType(void) const;
		virtual void		makeSound(void) const = 0;
};


#endif
