/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:46:32 by karisti-          #+#    #+#             */
/*   Updated: 2023/07/18 17:01:52 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"
#include "../includes/utils.hpp"


RPN::RPN()
{
}

RPN::RPN(RPN const & rpn)
{
	*this = rpn;
}

RPN::~RPN()
{
}

RPN&	RPN::operator=(RPN const & rpn)
{
	this->data = rpn.data;
	return *this;
}

/*
	Process this expression and output the correct result on the
	standard output.
*/
int		RPN::calculate(std::string values)
{
	std::string	token;
	int			number;

	if (values.begin() == values.end())
		return throwError("Error: missing numbers.", 0);

	while (values.size() > 0)
	{
		token = getNextToken(values, " ");

		if (isSignedInt(token))
		{
			number = stringToInt(token);
			if (number > 9 || number < 0)
				return throwError("Error: numbers must be between 0 and 9.", 0);
			data.push(number);
		}
		else if (isOperation(token))
		{
			if (data.size() < 2)
				return throwError("Error: insufficient numbers.", 0);

			int b = data.top();
			data.pop();
			int a = data.top();
			data.pop();

			switch (token[0])
			{
				case '+':
					if (addOverflows(a, b))
						return throwError("Error: add overflows.", 0);
					data.push(a + b);
					break;
				case '-':
					if (subOverflows(a, b))
						return throwError("Error: sub overflows.", 0);
					data.push(a - b);
					break;
				case '*':
					if (mulOverflows(a, b))
						return throwError("Error: mul overflows.", 0);
					data.push(a * b);
					break;
				case '/':
					if (b == 0)
						return throwError("Error: division by zero.", 0);
					data.push(a / b);
					break;
			}
		}
		else
			return throwError("Error: invalid token.", 0);
	}

	if (data.size() != 1)
		return throwError("Error: too many numbers.", 0);

	std::cout << data.top() << std::endl;
	
	return 1;
}

/*
	Check if s is a valid operation ("+", "-", "/", "*")
*/
bool			RPN::isOperation(const std::string& s)
{
	std::string		operations = "+-/*";

	return s.size() == 1 && operations.find(s[0]) != std::string::npos;
}
