/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:20 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/02 19:40:36 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int		main(void)
{
	try
	{
		//Bureaucrat bureau1("bureau1", 150);
		Bureaucrat bureau1("bureau1", 1);
		std::cout << bureau1 << std::endl;
		bureau1.decrementGrade(); 
		std::cout << bureau1 << std::endl;
		bureau1.incrementGrade();
		std::cout << bureau1 << std::endl;
		bureau1.incrementGrade();
		std::cout << bureau1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
