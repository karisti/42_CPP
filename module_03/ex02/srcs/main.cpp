/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/24 20:31:10 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
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
	
	// ScavTrap //
	ScavTrap	ct5 = ScavTrap("ct5");
	ScavTrap	ct6 = ScavTrap("ct6");
	ScavTrap	ct7 = ct6;
	
	ct5.attack("ct1");
	ct5.takeDamage(15);
	ct5.beRepaired(15);
	ct5.guardGate();

	ct7.attack("ct1");
	ct7.takeDamage(22);
	ct7.beRepaired(22);

	std::cout << "--------------" << std::endl;

	// FragTrap //
	FragTrap	ct8 = FragTrap("ct8");
	FragTrap	ct9 = FragTrap("ct9");
	FragTrap	ct10 = ct9;
	
	ct8.attack("ct1");
	ct8.takeDamage(15);
	ct8.beRepaired(15);
	ct8.highFivesGuys();

	ct10.attack("ct1");
	ct10.takeDamage(22);
	ct10.beRepaired(22);

	std::cout << "--------------" << std::endl;
	
	return (0);
}
