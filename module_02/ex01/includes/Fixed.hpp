/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:25 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/25 11:35:36 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		static int const	_fractBits = 8;
		int					_fPointValue;
	
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & fixed);
		Fixed(int const value);
		Fixed(float const value);
		Fixed&				operator=(Fixed const & fixed);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream&	operator<<(std::ostream & o, Fixed const & fixed);

#endif
