/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:11:33 by karisti-          #+#    #+#             */
/*   Updated: 2023/04/25 19:54:31 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <fstream>
#include <string>
#include <map>

struct Date {
	int				year;
	int				month;
	int				day;
	std::string		text;
};


class BitcoinExchange
{
	private:
		std::map<Date, float>	data;
		
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& bitcoinExchange);
		~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& bitcoinExchange);

		int		loadData(const std::string& dataFileName);
		int		calculate(const std::string& inputFileName);

	private:
		Date	parseDate(const std::string& dateStr);
		float	parseValue(const std::string& valueStr, const bool& checkErrors);
		float	findValueByDate(const Date& date);
};

bool	operator== (const Date& lhs, const Date& rhs);
bool	operator< (const Date& lhs, const Date& rhs);
bool	operator> (const Date& lhs, const Date& rhs);
bool	operator!= (const Date& lhs, const Date& rhs);
