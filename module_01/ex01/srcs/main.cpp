/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 17:37:51 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie*	zombie_arry;
	int		i;

	zombie_arry = zombieHorde(20, "OneName");
	
	i = -1;
	while (++i < 20)
	{
		std::cout << "Zombie [" << i << "] " << zombie_arry[i].getName() << std::endl;
	}

	delete [] zombie_arry;
	return (0);
}
