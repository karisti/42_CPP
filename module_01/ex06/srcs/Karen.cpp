/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:25:03 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/28 11:12:04 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Karen.hpp"

Karen::Karen(std::string level)
{	
	this->_level_str = level;
	this->_min_level = this->getMinLevel();
	
}

Karen::~Karen()
{
}

void	Karen::complain(void)
{
	switch (this->_min_level)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			this->insignificant();
			break;
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ] This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void	Karen::insignificant(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
}

int		Karen::getMinLevel(void)
{
	int	i;

	std::string complainLevelsStr[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	i = -1;
	while (++i < 4)
		if (this->_level_str == complainLevelsStr[i])
			return (i);

	return (-1);
}
