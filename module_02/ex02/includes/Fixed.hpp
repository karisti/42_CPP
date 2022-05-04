/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:25 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 20:57:20 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fPointValue;
		static int const	_fractBits = 8;
	
	public:
		Fixed();
		~Fixed();
		Fixed( Fixed const & fixed );
		Fixed( int const value );
		Fixed( float const value );
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		Fixed&				operator=(Fixed const & fixed);
		bool				operator>(Fixed const & fixed) const;
		bool				operator<(Fixed const & fixed) const;
		bool				operator>=(Fixed const & fixed) const;
		bool				operator<=(Fixed const & fixed) const;
		bool				operator==(Fixed const & fixed) const;
		bool				operator!=(Fixed const & fixed) const;
		Fixed				operator+(Fixed const & fixed) const;
		Fixed				operator-(Fixed const & fixed) const;
		Fixed				operator*(Fixed const & fixed) const;
		Fixed				operator/(Fixed const & fixed) const;
		Fixed&				operator++();
		Fixed				operator++(int);
		Fixed&				operator--();
		Fixed				operator--(int);
		static Fixed&		min(Fixed & f1, Fixed & f2);
		static Fixed const& min(Fixed const & f1, Fixed const & f2);
		static Fixed&		max(Fixed & f1, Fixed & f2);
		static Fixed const& max(Fixed const & f1, Fixed const & f2);
};

std::ostream&		operator<<(std::ostream & o, Fixed const & fixed);

#endif