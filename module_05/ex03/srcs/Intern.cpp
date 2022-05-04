/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:50:33 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 23:06:42 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete this->forms[i];
}

Form *Intern::makeForm(std::string name, std::string target)
{
	this->forms[0] = new PresidentialPardonForm(target);
	this->forms[1] = new RobotomyRequestForm(target);
	this->forms[2] = new ShrubberyCreationForm(target);

	for (int i = 0; i < 3; i++)
	{
		if (name.compare(forms[i]->getName()) == 0)
		{
			std::cout << "Intern creates " << name << std::endl;
			return forms[i];
		}
	}
	throw InvalidFormException();
}

const char* Intern::InvalidFormException::what(void) const throw()
{
	return ("Form not Found\n");
}
