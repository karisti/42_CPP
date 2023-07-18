/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:28:52 by karisti-          #+#    #+#             */
/*   Updated: 2023/07/17 21:13:54 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <sstream>
#include <string>
#include <time.h>


int				throwError(const std::string& errorStr, const int& returnValue);
std::string		getNextToken(std::string& str, const std::string& delim);
bool			isUnsignedInt(const std::string& s);
unsigned int	stringToUnsignedInt(const std::string& s);
double			getCurrentTime(void);
