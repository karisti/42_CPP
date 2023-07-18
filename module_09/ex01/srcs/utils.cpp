/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:44 by karisti-          #+#    #+#             */
/*   Updated: 2023/07/17 21:10:30 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.hpp"

/*
	Displays on the standard output the error and returns returnValue
*/
int				throwError(const std::string& errorStr, const int& returnValue)
{
	std::cout << errorStr << std::endl;
	return returnValue;
}

/*
	Returns the next substring from the start until the delimiter (if exists)
	If delimiter is not found, it returns until the end of the string
*/
std::string		getNextToken(std::string& str, const std::string& delim)
{
	size_t	pos = 0;
	
	if (str.empty())
		return "";
	
	pos = str.find(delim);
	
	std::string token = str.substr(0, pos);

	if (pos != std::string::npos)
		pos = pos + delim.size();
		
	str = str.erase(0, pos);
	
	return token;
}

/*
	Checks if s is a valid signed integer
*/
bool			isSignedInt(const std::string& s)
{
	std::stringstream	ssValue(s);
	int					value;
	
	ssValue >> value;
	
	return ssValue.eof() && ! ssValue.fail();
}

/*
	Converts s to int value
*/
int				stringToInt(const std::string& s)
{
	std::stringstream ssValue(s);
	int		value;
	
	ssValue >> value;

	return value;
}

bool			addOverflows(int a, int b)
{
	int	result = a + b;
	
	if (a > 0 && b > 0 && result < 0)
		return true;
	if (a < 0 && b < 0 && result > 0)
		return true;
	
	return false;
}

bool			subOverflows(int a, int b)
{
	int	result = a - b;
	
	if (a < 0 && b > 0 && result > 0)
		return true;
	if (a > 0 && b < 0 && result < 0)
		return true;
	
	return false;
}

bool			mulOverflows(int a, int b)
{
	int	result = a * b;
	
	if (a > 0 && b > 0 && result < 0)
		return true;
	if (a < 0 && b < 0 && result < 0)
		return true;
	if ((a < 0 || b < 0) && result > 0)
		return true;
		
	return false;
}
