/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:20 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 17:56:32 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	Intern *intern = new Intern();

	Bureaucrat bureaucrat("Bureau 1", 1);
	//Bureaucrat bureaucrat("Bureau 2", 50);
	
	Form* shrubbery = intern->makeForm("ShrubberyCreationForm", "Shrub 1");
	Form* robotomy = intern->makeForm("RobotomyRequestForm", "Roboto 1");
	Form* pardon = intern->makeForm("PresidentialPardonForm", "Pardon 1");

	std::cout << bureaucrat << std::endl;
	std::cout << "---------" << std::endl;
	
	try
	{
		std::cout << *shrubbery << std::endl;

		bureaucrat.signForm(*shrubbery);
		bureaucrat.executeForm(*shrubbery);
		
		std::cout << *shrubbery << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------" << std::endl;

	try
	{
		std::cout << *robotomy << std::endl;

		bureaucrat.signForm(*robotomy);
		bureaucrat.executeForm(*robotomy);
		
		std::cout << *robotomy << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------" << std::endl;

	try
	{
		std::cout << *pardon << std::endl;

		bureaucrat.signForm(*pardon);
		bureaucrat.executeForm(*pardon);
		
		std::cout << *pardon << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------" << std::endl;

	try
	{
		Form* unknown = intern->makeForm("Unknown form", "Fooorm");
		std::cout << *unknown << std::endl;
		delete unknown;
		
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------" << std::endl;

	delete shrubbery;
	delete robotomy;
	delete pardon;
	
	return 0;
}
