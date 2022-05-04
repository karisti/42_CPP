/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:25:35 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/01 11:49:35 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Karen.hpp"

int	main(int argc, char **argv)
{
	std::string		level;

	if (argc != 2)
	{
		std::cout << "Incorrect arguments. Log level needed." << std::endl;
		return (1);
	}
	level = argv[1];
	Karen karen = Karen(level);
	karen.complain();
	return (0);
}
