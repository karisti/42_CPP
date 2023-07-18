/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:46:36 by karisti-          #+#    #+#             */
/*   Updated: 2023/05/20 17:25:02 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <stack>


class RPN
{
	private:
		std::stack<int> data;
		
	public:
		RPN();
		RPN(const RPN& rpn);
		~RPN();
		RPN&	operator=(const RPN& rpn);

		int		calculate(std::string values);

	private:
		bool	isOperation(const std::string& s);
};
