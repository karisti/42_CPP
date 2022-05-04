/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/24 20:31:31 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	ct1 = ClapTrap();
	ClapTrap	ct2 = ClapTrap("ct2");
	ClapTrap	ct3 = ClapTrap("ct3");
	ClapTrap	ct4 = ct3;

	ct1.attack("ct2");
	ct1.takeDamage(5);
	ct1.beRepaired(25);
	
	ct2.attack("ct1");
	ct2.takeDamage(15);
	ct2.beRepaired(15);

	ct4.attack("ct1");
	ct4.takeDamage(22);
	ct4.beRepaired(22);

	std::cout << "--------------" << std::endl;
	
	return (0);
}
