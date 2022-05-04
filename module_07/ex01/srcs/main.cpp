/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:09:27 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 12:30:57 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"


int	main( void ) {
	int				array[5] = {0, 1, 2, 3, 4};
	std::string		array1[3] = {"asd", "asd1", "asd2"};

	iter(array, 5, print_val);
	iter(array1, 3, print_val);
	
	
	return 0;
}
