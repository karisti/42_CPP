/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/24 19:25:13 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

int	main(void) {
	bool	inside;

	inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0.5, 0.5) );
	std::cout << "Is inside (yes): " << inside << std::endl;

	inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(1, 1) );
	std::cout << "Is inside (no): " << inside << std::endl;

	inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0, 1) );
	std::cout << "Is inside (no): " << inside << std::endl;

	inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0.5, 1) );
	std::cout << "Is inside (no): " << inside << std::endl;

	inside = bsp( Point(0, 0), Point(1, 0), Point(0.5, 1), Point(0.44, 0.33) );
	std::cout << "Is inside (yes): " << inside << std::endl;
	return (0);
}


