/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:41:01 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/30 11:12:22 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "../includes/Animal.hpp"
#include <iostream>


class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat & cat);
		Cat&			operator=(Cat const & cat);
		virtual ~Cat();
		void	makeSound(void) const;
};


#endif
