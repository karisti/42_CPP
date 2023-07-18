/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:35 by karisti-          #+#    #+#             */
/*   Updated: 2023/07/17 20:47:28 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"
#include "../includes/utils.hpp"


void cleaks() { system("leaks RPN"); }

int main(int argc, char* argv[])
{
	// atexit(cleaks);
	
	if (argc != 2)
		return throwError("Error: invalid number of arguments.", 1);

	RPN rpn = RPN();
	
	if (!rpn.calculate(argv[1]))
		return 1;

	return 0;
}
