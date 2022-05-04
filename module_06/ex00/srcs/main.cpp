/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 10:25:23 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Type.hpp"



int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "Argument error" << std::endl;
		return 0;
	}

	Type type(argv[1]);
	type.convert();

	return (0);
}
