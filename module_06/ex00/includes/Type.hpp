/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:45:36 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 11:11:25 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

#include <iostream>
#include <string>
#include <cmath>
#include <cfloat>
#include <limits>


class Type
{
	private:
		char			*_chr;
		std::string		_str;
		double			_value;
		bool			_outOfLimits;

	public:
		Type();
		Type(char *value);
		Type(Type const & type);
		~Type();
		Type&	operator=(Type const & type);

		void	convert(void);
		void	toDouble(void);
		void	toFloat(void);
		void	toInt(void);
		void	toChar(void);
};

#endif
