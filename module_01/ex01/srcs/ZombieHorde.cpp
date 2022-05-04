/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:32:04 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 17:36:07 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombie_arry = new Zombie[N];
	int		i;

	i = -1;
	while (++i < N)
		zombie_arry[i].setName(name);
	return (zombie_arry);
}
