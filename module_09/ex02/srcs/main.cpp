/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:39:04 by karisti-          #+#    #+#             */
/*   Updated: 2023/05/20 17:32:32 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"
#include "../includes/utils.hpp"


void cleaks() { system("leaks PmergeMe"); }

int main(int argc, char* argv[])
{
	// atexit(cleaks);
	
	if (argc < 2)
		return throwError("Error: invalid number of arguments.", 1);

	PmergeMe pmergeMe = PmergeMe();
	
	if (!pmergeMe.checkData(argv, argc))
		return throwError("Error: some invalid integer.", 1);

	pmergeMe.executeVector(argv, argc);
	pmergeMe.executeList(argv, argc);
	pmergeMe.printInfo(argv, argc);

	return 0;
}
