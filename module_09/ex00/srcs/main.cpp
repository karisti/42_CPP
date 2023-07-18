/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:09:27 by karisti-          #+#    #+#             */
/*   Updated: 2023/05/20 17:24:06 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include "../includes/utils.hpp"


void cleaks() { system("leaks btc"); }

int	main(int argc, char* argv[])
{
	// atexit(cleaks);
	
	std::string		dataFileName = "./srcs/data.csv";
	
	if (argc != 2)
		return throwError("Error: could not open file.", 1);
		
	BitcoinExchange bitcoinExchange = BitcoinExchange();
	
	if (!bitcoinExchange.loadData(dataFileName))
		return 1;

	if (!bitcoinExchange.calculate(argv[1]))
		return 1;
	
	return 0;
}
