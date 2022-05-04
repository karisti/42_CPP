/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:20 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/02 20:48:35 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"


int main()
{
	try
	{
		Bureaucrat	bureau1("Bureau 1", 35);
		std::cout << bureau1 << std::endl;
		
		Form		form1("Form 1", 40, 50);
		
		bureau1.signForm(form1);
		std::cout << form1 << std::endl;
		
		std::cout << "--------------" << std::endl;

		Form		form2("Form 2", 30, 50);
		
		bureau1.signForm(form2);
		std::cout << form2 << std::endl;
		
		std::cout << "--------------" << std::endl;

		Form		form3("Form 3", 0, 50);
		// Form		form3("Form 3", 151, 50);
		
		bureau1.signForm(form3);
		std::cout << form3 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << "\n";
	}

	return 0;
}
