/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:46:59 by karisti-          #+#    #+#             */
/*   Updated: 2023/07/17 23:41:57 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include "../includes/utils.hpp"


BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& bitcoinExchange)
{
	*this = bitcoinExchange;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& bitcoinExchange)
{
	this->data = bitcoinExchange.data;
	return *this;
}

/*
	Loads all exchange rates from the given .csv file
*/
int		BitcoinExchange::loadData(const std::string& dataFileName)
{
	std::string		dateStr, valueStr, line, lineAux;
	std::ifstream	dataFile(dataFileName);
	float 			value;
	Date			date;
	
	
	if (!dataFile.is_open())
		return throwError("Error: could not open data file.", 0);
	
	getline(dataFile, line); // skip headers
	
	while (getline(dataFile, line))
	{
		lineAux = line;
		
		dateStr = getNextToken(lineAux, ",");
		valueStr = getNextToken(lineAux, ",");

		if (dateStr.empty() || valueStr.empty() || !lineAux.empty())
		{
			throwError("Error: bad data file format => " + line, 0);
			continue ;
		}

		date = this->parseDate(dateStr);
		if (date.text.length() == 0)
			continue ;
		
		value = this->parseValue(valueStr, false);

		this->data.insert(std::pair<Date, float>(date, value));
	}
	dataFile.close();

	return 1;
}

/*
	Display on the standard output the result of the value multiplied
	by the exchange rate according to the date indicated in the loaded
	database
*/
int	BitcoinExchange::calculate(const std::string& inputFileName)
{
	std::ifstream	inputFile(inputFileName);
	std::string		dateStr, valueStr, line, lineAux;
	float			result;
	Date			date;
	
	
	if (!inputFile.is_open())
		return throwError("Error: could not open file.", 0);
	
	getline(inputFile, line); // skip headers
	
	while (getline(inputFile, line))
	{
		lineAux = line;
		
		dateStr = getNextToken(lineAux, " | ");
		valueStr = getNextToken(lineAux, " | ");

		if (dateStr.empty() || valueStr.empty() || !lineAux.empty())
		{
			throwError("Error: bad input => " + line, 0);
			continue ;
		}
		
		date = this->parseDate(dateStr);
		if (date.text.length() == 0)
			continue ;

		float value = this->parseValue(valueStr, true);
		if (value == -1)
			continue ;

		float exchangeRate = this->findValueByDate(date);
		if (exchangeRate == -1)
			continue ;
			
		result = exchangeRate * value;
		
		std::cout << date.text << " => " << value << " = " << result << std::endl;
	}
	
	inputFile.close();

	return 1;
}

/*
	Returns Date struct with the values parsed from dateStr
	If some error is detected, Date.text is leaved empty
*/
Date	BitcoinExchange::parseDate(const std::string& dateStr)
{
	std::string		dateStrAux = dateStr;
	std::string		dateYear, dateMonth, dateDay;
	Date			date;
	
	dateYear = getNextToken(dateStrAux, "-");
	dateMonth = getNextToken(dateStrAux, "-");
	dateDay = getNextToken(dateStrAux, "-");
	
	if (!dateStrAux.empty() || dateYear.empty() || dateMonth.empty() || dateDay.empty() ||
		!isUnsignedInt(dateYear) || !isUnsignedInt(dateMonth) || !isUnsignedInt(dateDay))
	{
		throwError("Error: bad date format => " + dateStr, 0);
		return date;
	}

	date.year = stringToUnsignedInt(dateYear);
	date.month = stringToUnsignedInt(dateMonth);
	date.day = stringToUnsignedInt(dateDay);

	if (date.year < 2009 || date.year > 2023)
	{
		throwError("Error: bad year => " + dateStr, 0);
		return date;
	}
	
	if (date.month < 1 || date.month > 12)
	{
		throwError("Error: bad month => " + dateStr, 0);
		return date;
	}

	if (date.day < 1 || date.day > 31)
	{
		throwError("Error: bad day => " + dateStr, 0);
		return date;
	}

	date.text = dateStr;

	return date;
}

/*
	Returns the float value or -1 if some error is detected
	If checkErrors is true, it does additional limit checks
*/
float	BitcoinExchange::parseValue(const std::string& valueStr, const bool& checkErrors)
{
	if (!isFloat(valueStr))
		return throwError("Error: bad value number => " + valueStr, -1);
		
	float value = stringToFloat(valueStr);

	if (!checkErrors)
		return value;
		
	if (value < 0)
		return throwError("Error: not a positive number.", -1);

	if (value > 1000)
		return throwError("Error: too large a number.", -1);
	
	return value;
}

/*
	Returns the according exchange rate for the given date
*/
float	BitcoinExchange::findValueByDate(const Date& date)
{
	if (this->data.size() <= 0)
		return throwError("Error: no data found.", -1);
	
	std::map<Date, float>::iterator prevIt = this->data.begin();
	for (std::map<Date, float>::iterator it = this->data.begin(); it != this->data.end(); it++)
	{
		if (it->first > date)
			break ;
		
		prevIt = it;
	}
	
	return prevIt->second;
}

bool	operator==(const Date& lhs, const Date& rhs)
{
	if (lhs.text == rhs.text)
		return true;
	return false;
}

bool	operator< (const Date& lhs, const Date& rhs)
{
	if (lhs.year < rhs.year)
		return true;
	if (lhs.year > rhs.year)
		return false;

	if (lhs.month < rhs.month)
		return true;
	if (lhs.month > rhs.month)
		return false;

	if (lhs.day < rhs.day)
		return true;
	
	return false;
}

bool	operator> (const Date& lhs, const Date& rhs)
{
	return !(lhs < rhs) && !(lhs == rhs);
}

bool	operator!=(const Date& lhs, const Date& rhs)
{
	return !(lhs == rhs);
}
