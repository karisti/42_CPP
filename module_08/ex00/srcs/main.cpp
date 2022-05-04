/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:09:27 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 14:19:11 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

void	print(int num)
{
	std::cout << num << std::endl;
}

int	main(void)
{
	std::list<int>			list;
	std::vector<int>		vector;

	for (int i = 0; i < 5; i++)
	{
		list.push_back(i);
		vector.push_back(i);
	}
	
	try
	{
		std::cout << "In array: " << std::endl;
		for_each(list.begin(), list.end(), print);

		std::cout << "Found (8): " << *::easyfind(list, 8) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "___________" << std::endl;

	try
	{
		std::cout << "In array: " << std::endl;
		for_each(vector.begin(), vector.end(), print);
		
		std::cout << "Found (3): " << *::easyfind(vector, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "___________" << std::endl;

	return (0);
}

