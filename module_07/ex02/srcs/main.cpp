/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:09:27 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 23:32:09 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"


#include <iostream>
#include <Array.hpp>


int main(void)
{
	Array<int> numbers1;
	Array<int> numbers2(5);

	numbers2[0] = 0;
	numbers2[1] = 1;
	numbers2[2] = 2;
	numbers2[3] = 3;
	numbers2[4] = 4;
	
	try
	{
		numbers2[5] = 5;
		numbers2[6] = 6;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----------" << std::endl;
	
	std::cout << "Numbers 1 size: " << numbers1.size() << std::endl;
	std::cout << "Numbers 2 size: " << numbers2.size() << std::endl;
	
	std::cout << "-----------" << std::endl;
	
	numbers1 = numbers2;

	std::cout << "Numbers 1 size: " << numbers1.size() << std::endl;
	std::cout << "Numbers 2 size: " << numbers2.size() << std::endl;
	
	std::cout << "-----------" << std::endl;
	
	try
	{
		for (unsigned int i = 0; i < numbers1.size(); i++)
		{
			std::cout << numbers1[i] << std::endl;
		}
		std::cout << "-----------" << std::endl;
		std::cout << numbers1[numbers1.size()] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------------" << std::endl;

	Array<std::string> strings1;
	Array<std::string> strings2 (3);

	strings2[0] = "Str 1";
	strings2[1] = "Str 2";
	strings2[2] = "Str 3";
	
	try
	{
		strings2[4] = "Str 4";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----------" << std::endl;
	
	std::cout << "Strings 1 size: " << strings1.size() << std::endl;
	std::cout << "Strings 2 size: " << strings2.size() << std::endl;
	
	std::cout << "-----------" << std::endl;
	
	strings1 = strings2;

	std::cout << "Strings 1 size: " << strings1.size() << std::endl;
	std::cout << "Strings 2 size: " << strings2.size() << std::endl;
	
	std::cout << "-----------" << std::endl;
	
	try
	{
		for (unsigned int i = 0; i < strings1.size(); i++)
		{
			std::cout << strings1[i] << std::endl;
		}
		std::cout << "---" << std::endl;
		for (unsigned int i = 0; i < strings2.size(); i++)
		{
			std::cout << strings2[i] << std::endl;
		}
		std::cout << "-----------" << std::endl;
		
		strings1[1] = "aaaaa";
		strings2[2] = "bbbbbbb";

		for (unsigned int i = 0; i < strings1.size(); i++)
		{
			std::cout << strings1[i] << std::endl;
		}
		std::cout << "---" << std::endl;
		for (unsigned int i = 0; i < strings2.size(); i++)
		{
			std::cout << strings2[i] << std::endl;
		}
		std::cout << strings1[-1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------------" << std::endl;

	return 0;
}
