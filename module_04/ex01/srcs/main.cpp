/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/02 14:28:09 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include <iostream>

int	main(void)
{
	Animal*	animals[10];
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "--- " << i << " ---" << std::endl;
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "------------------" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "--- Destroying " << i << " ---" << std::endl;
		delete animals[i];
	}

	std::cout << "------------------" << std::endl;

	// Copy constructor, brain is independent
	Cat*	cat1 = new Cat();
	cat1->getBrain()->setIdea(5, "idea1");
	std::cout << "----" << std::endl;
	
	Cat		cat2 = *cat1;
	std::cout << "----" << std::endl;
	std::cout << "--- Cat 1 idea[5]: " << cat1->getBrain()->getIdea(5) << " ---" << std::endl;
	std::cout << "--- Cat 2 idea[5]: " << cat2.getBrain()->getIdea(5) << " ---" << std::endl;

	cat2.getBrain()->setIdea(5, "idea2");
	std::cout << "----" << std::endl;
	std::cout << "--- Cat 1 idea[5]: " << cat1->getBrain()->getIdea(5) << " ---" << std::endl;
	std::cout << "--- Cat 2 idea[5]: " << cat2.getBrain()->getIdea(5) << " ---" << std::endl;

	std::cout << "------------------" << std::endl;
	
	// Assignment, brain is shared
	Cat		cat3 = Cat();
	std::cout << "----" << std::endl;
	Cat		cat4 = Cat();
	std::cout << "----" << std::endl;

	cat3.getBrain()->setIdea(5, "idea3");
	cat4.getBrain()->setIdea(5, "idea4");
	std::cout << "--- Cat 3 idea[5]: " << cat3.getBrain()->getIdea(5) << " ---" << std::endl;
	std::cout << "--- Cat 4 idea[5]: " << cat4.getBrain()->getIdea(5) << " ---" << std::endl;
	std::cout << "----" << std::endl;
	// Brain shared, will crash at the end (double free)
	//cat3 = cat4;
	std::cout << "----" << std::endl;
	std::cout << "--- Cat 3 idea[5]: " << cat3.getBrain()->getIdea(5) << " ---" << std::endl;
	std::cout << "--- Cat 4 idea[5]: " << cat4.getBrain()->getIdea(5) << " ---" << std::endl;
	std::cout << "----" << std::endl;
	cat3.getBrain()->setIdea(5, "idea33");
	std::cout << "--- Cat 3 idea[5]: " << cat3.getBrain()->getIdea(5) << " ---" << std::endl;
	std::cout << "--- Cat 4 idea[5]: " << cat4.getBrain()->getIdea(5) << " ---" << std::endl;
	
	std::cout << "------------------" << std::endl;
	delete cat1;
	std::cout << "------------------" << std::endl;

	return (0);
}
