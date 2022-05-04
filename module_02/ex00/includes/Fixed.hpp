/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:25 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/25 11:11:15 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		static const int	_fractBits = 8;
		int					_fPointValue;
	
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & fixed);
		Fixed&				operator=(Fixed const & fixed);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
