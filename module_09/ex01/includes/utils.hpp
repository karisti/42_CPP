/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:28:52 by karisti-          #+#    #+#             */
/*   Updated: 2023/07/17 20:55:21 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <sstream>
#include <string>


int				throwError(const std::string& errorStr, const int& returnValue);
std::string		getNextToken(std::string& str, const std::string& delim);
bool			isSignedInt(const std::string& s);
int				stringToInt(const std::string& s);
bool			addOverflows(int a, int b);
bool			subOverflows(int a, int b);
bool			mulOverflows(int a, int b);
