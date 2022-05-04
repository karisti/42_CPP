/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/28 14:49:22 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----------" << std::endl;
	const Animal* anim = new Animal();
	std::cout << "-----------" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "-----------" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "-----------" << std::endl;
	const WrongAnimal* wcat = new WrongCat();
	std::cout << "-----------" << std::endl;
	const WrongCat* wcat1 = new WrongCat();
	std::cout << "-----------" << std::endl;

	const Animal anim1 = Animal();
	std::cout << "-----------" << std::endl;
	const Animal anim2(anim1);
	std::cout << "-----------" << std::endl;
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;
	std::cout << wcat1->getType() << " " << std::endl;
	std::cout << "-----------" << std::endl;
	dog->makeSound();
	cat->makeSound();
	anim->makeSound();
	
	wcat->makeSound();
	wcat1->makeSound();
	
	std::cout << "-----------" << std::endl;

	delete anim;
	delete dog;
	delete cat;
	delete wcat;
	delete wcat1;
	std::cout << "-----------" << std::endl;
	
	return (0);
}
