/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:09:27 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 14:37:44 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

int main()
{
	try
	{
		Span	sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span				sp1 = Span(200);
		std::vector<int>	v;

		for (int i = 0; i < 200; i++)
		{
			v.push_back(rand() % 200 + 1);
		}
		sp1.addNumber(v.begin(), v.end());
		
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "---------" << std::endl;
	
	try
	{
		Span				sp1 = Span(200);
		std::vector<int>	v;

		for (int i = 0; i < 200; i++)
		{
			v.push_back(rand() % 200 + 1);
		}
		sp1.addNumber(v.begin(), v.end());
		sp1.addNumber(v.begin(), v.end());
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------" << std::endl;

	try
	{
		Span	sp1 = Span(1);
		
		sp1.addNumber(1);
		sp1.addNumber(2);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------" << std::endl;

	try
	{
		Span	sp1 = Span(1);
		
		sp1.addNumber(1);
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------" << std::endl;

	try
	{
		Span	sp1 = Span(1);
		
		sp1.addNumber(1);
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------" << std::endl;
	
}

