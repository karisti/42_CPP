/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:44 by karisti-          #+#    #+#             */
/*   Updated: 2023/07/17 19:50:35 by karisti-         ###   ########.fr       */
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
	Checks if s is a valid float
*/
bool			isFloat(const std::string& s)
{
	std::stringstream	ssValue(s);
	float				value;
	
	ssValue >> value;
	
	return ssValue.eof() && ! ssValue.fail();
}

/*
	Checks if s is a valid positive integer
*/
bool			isUnsignedInt(const std::string& s)
{
	std::stringstream	ssValue(s);
	unsigned int		value;
	
	ssValue >> value;
	
	return ssValue.eof() && ! ssValue.fail();
}

/*
	Converts s to float value
*/
float				stringToFloat(const std::string& s)
{
	std::stringstream	ssValue(s);
	float				value;
	
	ssValue >> value;

	return value;
}

/*
	Converts s to int value
*/
int				stringToUnsignedInt(const std::string& s)
{
	std::stringstream	ssValue(s);
	unsigned int		value;
	
	ssValue >> value;

	return value;
}
