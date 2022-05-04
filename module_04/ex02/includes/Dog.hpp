/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:41:01 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/30 11:16:24 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include <iostream>


class Dog : public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog();
		Dog(Dog const & dog);
		virtual ~Dog();
		Dog&			operator=(Dog const & dog);
		Brain*			getBrain(void) const;
		void			makeSound(void) const;
};


#endif
