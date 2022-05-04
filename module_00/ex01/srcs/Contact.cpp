/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:49:49 by karisti-          #+#    #+#             */
/*   Updated: 2022/02/28 16:20:30 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void)
{
	this->_isEmpty = 1;
}

Contact::~Contact()
{
}

void		Contact::setIdx(int idx)
{
	this->_idx = idx;
}

void		Contact::setIsEmpty(int isEmpty)
{
	this->_isEmpty = isEmpty;
}

void		Contact::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void		Contact::setLastName(std::string last_name)
{
	this->_last_name = last_name;
}

void		Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void		Contact::setPhoneNumber(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void		Contact::setDarkestSecret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string		Contact::getIdx(void) const
{
	std::string			str;
	std::stringstream	ss;

	ss << this->_idx;
	ss >> str;
	return (str);
}

int			Contact::getIsEmpty(void) const
{
	return (this->_isEmpty);
}

std::string	Contact::getFirstName(void) const
{
	return (this->_first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phone_number);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkest_secret);
}

void		Contact::printContactFourColsValue(std::string value) const
{
	if (value.length() > 9)
	{
		value = value.substr(0, 9);
		value = value.insert(9, ".");
	}
	std::cout << "|" << std::setw(10) << value;
}

void		Contact::printContactFourCols(void) const
{
	if (this->_isEmpty)
		return ;
	this->printContactFourColsValue(this->getIdx());
	this->printContactFourColsValue(this->getFirstName());
	this->printContactFourColsValue(this->getLastName());
	this->printContactFourColsValue(this->getNickname());
	std::cout << "|" << std::endl;
}

int			Contact::printContactInLines(void) const
{
	if (this->_isEmpty)
		return (0);
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
	return (1);
}
