/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:25:03 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/28 11:12:47 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::complain(std::string level)
{
	int	i;

	void	(Karen::*complainFuncs[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string complainLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	i = -1;
	while (++i < 4)
		if (level == complainLevels[i])
		{
			(this->*complainFuncs[i])();
			break;
		}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ] This is unacceptable, I want to speak to the manager now." << std::endl;
}

