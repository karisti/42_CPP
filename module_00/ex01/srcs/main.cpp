/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:30:50 by karisti-          #+#    #+#             */
/*   Updated: 2022/02/28 15:48:16 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	manage_cmd(PhoneBook *phoneBook, std::string input_str)
{
	if (input_str.compare("ADD") == 0)
		phoneBook->addContact();
	else if (input_str.compare("SEARCH") == 0)
		phoneBook->searchContacts();
	else
		std::cout << "Unknown command. Available commands: ADD / SEARCH / EXIT" << std::endl;
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input_str;
	
	std::cout << "Welcome to the awesome PhoneBook! What do you want to do?" << std::endl
			<< "Available commands: ADD / SEARCH / EXIT" << std::endl;
	while (1)
	{
		std::cout << "Command: ";
		std::getline(std::cin, input_str);
		if (input_str.compare("EXIT") == 0)
			break ;
		manage_cmd(&phoneBook, input_str);
	}
	std::cout << "Bye!"<< std::endl;
	return (0);
}
