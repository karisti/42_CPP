/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:49:11 by karisti-          #+#    #+#             */
/*   Updated: 2022/02/28 16:21:09 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void)
{
	this->_pos = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	std::string	input_str;
	std::cout << "Please, provide contact info." << std::endl;
	this->contact_arry[this->_pos].setIdx(this->_pos);
	std::cout << "First name: ";
	std::getline(std::cin, input_str);
	this->contact_arry[this->_pos].setFirstName(input_str);
	std::cout << "Last name: ";
	std::getline(std::cin, input_str);
	this->contact_arry[this->_pos].setLastName(input_str);
	std::cout << "Nickname: ";
	std::getline(std::cin, input_str);
	this->contact_arry[this->_pos].setNickname(input_str);
	std::cout << "Phone number: ";
	std::getline(std::cin, input_str);
	this->contact_arry[this->_pos].setPhoneNumber(input_str);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input_str);
	this->contact_arry[this->_pos].setDarkestSecret(input_str);
	std::cout << "Contact added successfully!" << std::endl;
	this->contact_arry[this->_pos].setIsEmpty(0);
	if (this->_pos >= 7)
		this->_pos = 0;
	else
		this->_pos++;
}

int		PhoneBook::searchContactIdx() const
{
	std::string			input_str;
	int					i;

	std::cout << "Index: ";
	std::getline(std::cin, input_str);
	i = -1;
	if (!input_str.empty() && input_str.find_first_not_of("0123456789") == std::string::npos)
		i = stoi(input_str);
	if (i > 7 || i < 0)
	{
		std::cout << "Index must be a number between 0 and 7" << std::endl;
		return (0);
	}
	if (!this->contact_arry[i].printContactInLines())
		std::cout << "Contact not found" << std::endl;
	return (1);
}

void	PhoneBook::searchContacts(void) const
{
	int	i;

	if (this->contactCount() <= 0)
	{
		std::cout << "There are no contacts to display. Use ADD command to add some." << std::endl;
		return ;
	}
	this->printContactFourColsHeader();
	i = -1;
	while (++i < 8)
		this->contact_arry[i].printContactFourCols();
	while (1)
	{
		if (this->searchContactIdx() == 1)
			break ;
	}
}

int	PhoneBook::contactCount(void) const
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (++i < 8)
	{
		if (!this->contact_arry[i].getIsEmpty())
			count++;
	}
	return (count);
}

void		PhoneBook::printContactFourColsHeader(void) const
{
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
}
