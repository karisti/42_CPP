/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:41:01 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/30 11:12:28 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "../includes/Animal.hpp"
#include <iostream>


class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog & dog);
		Dog&			operator=(Dog const & dog);
		virtual ~Dog();
		void	makeSound(void) const;
};


#endif
