/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:29:47 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/24 19:14:28 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int	main( void ) {
	
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "-------------------" << std::endl;
	
	Fixed num1(1);
	Fixed num2(0.5f);
	Fixed num3(num1);
	bool comp;
	
	comp = num1 > num2;
	std::cout << num1 << " > " << num2 << " --> " << comp << std::endl;
	comp = num1 < num2;
	std::cout << num1 << " < " << num2 << " --> " << comp << std::endl;
	comp = num1 >= num3;
	std::cout << num1 << " >= " << num3 << " --> " << comp << std::endl;
	comp = num1 <= num3;
	std::cout << num1 << " <= " << num3 << " --> " << comp << std::endl;
	comp = num1 == num3;
	std::cout << num1 << " == " << num3 << " --> " << comp << std::endl;
	comp = num1 != num3;
	std::cout << num1 << " != " << num3 << " --> " << comp << std::endl;

	std::cout << "-------------------" << std::endl;
	
	num1 = num3 + num2;
	std::cout << num3 << " + " << num2 << " --> " << num1 << std::endl;
	num1 = num3 - num2;
	std::cout << num3 << " - " << num2 << " --> " << num1 << std::endl;
	num1 = num3 * num2;
	std::cout << num3 << " * " << num2 << " --> " << num1 << std::endl;
	num1 = num3 / num2;
	std::cout << num3 << " / " << num2 << " --> " << num1 << std::endl;
	
	std::cout << "-------------------" << std::endl;
	
	// ++
	std::cout << "++" << num1 << " --> " << ++num1 << " --> " << num1 << std::endl;
	std::cout << num1 << "++" << " --> " << num1++ << " --> " << num1 << std::endl;

	// --
	std::cout << "--" << num1 << " --> " << --num1 << " --> " << num1 << std::endl;
	std::cout << num1 << "--" << " --> " << num1-- << " --> " << num1 << std::endl;

	std::cout << "-------------------" << std::endl;

	// min / max
	Fixed num4(1);
	Fixed num5(0.5f);
	std::cout << "Min (" << num5 << ", " << num4 << "): " << Fixed::min(num5, num4) << std::endl;
	std::cout << "Max (" << num5 << ", " << num4 << "): " << Fixed::max(num5, num4) << std::endl;

	Fixed const num6(1);
	Fixed const num7(0.5f);
	std::cout << "(const) Min (" << num6 << ", " << num7 << "): " << Fixed::min(num6, num7) << std::endl;
	std::cout << "(const) Max (" << num6 << ", " << num7 << "): " << Fixed::max(num6, num7) << std::endl;
	
	return (0);
}


