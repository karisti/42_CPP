/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:41:01 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/30 11:14:06 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include <iostream>


class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat();
		Cat(Cat const & cat);
		virtual ~Cat();
		Cat&			operator=(Cat const & cat);
		Brain*			getBrain(void) const;
		void			makeSound(void) const;
};


#endif
