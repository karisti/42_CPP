/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:44:28 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 23:08:32 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Type.hpp"

Type::Type()
{
}

Type::Type(char *chr) : _chr(chr)
{
	try
	{
		std::string s(chr);
		this->_str = s;
		this->_value = std::stod(_str);
	}
	catch (const std::exception & e)
	{
		if (this->_str.length() == 1)
		{
			this->_value = static_cast<char>(this->_chr[0]);
			return ;
		}
		this->_outOfLimits = true;
	}
}

Type::Type(Type const & type)
{
	this->_str = type._str;
	this->_value = type._value;
	this->_outOfLimits = type._outOfLimits;
}

Type::~Type()
{
}

Type&		Type::operator=(Type const & type)
{
	this->_str = type._str;
	this->_value = type._value;
	this->_outOfLimits = type._outOfLimits;
	
	return (*this);
}

void		Type::convert(void)
{
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

void		Type::toDouble(void)
{
	std::cout << "double: ";
	if (this->_outOfLimits || isnan(this->_value) || this->_value > DBL_MAX || this->_value < DBL_MIN_EXP)
		std::cout << "nan";
	else
	{
		double number = static_cast<double>(this->_value);
		std::cout << number;
		if (static_cast<int>(number) == number)
			std::cout << ".0";
	}
	std::cout << std::endl;
}

void		Type::toFloat(void)
{
	std::cout << "float: ";
	if (this->_outOfLimits || isnan(this->_value) || this->_value > FLT_MAX || this->_value < FLT_MIN_EXP)
		std::cout << "nanf";
	else
	{
		float number = static_cast<float>(this->_value);
		std::cout << number;
		if (static_cast<int>(number) == number)
			std::cout << ".0";
		std::cout << "f";
	}
		
	std::cout << std::endl;
}

void		Type::toInt(void)
{
	std::cout << "int: ";
	if (this->_outOfLimits || isnan(this->_value) || this->_value > INT_MAX || this->_value < INT_MIN)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(this->_value);
	std::cout << std::endl;
}

void		Type::toChar(void)
{
	std::cout << "char: ";
	if (this->_outOfLimits || isnan(this->_value))
		std::cout << "impossible";
	else if (isprint(this->_value) == false)
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(this->_value) << "'";
	std::cout << std::endl;
}
