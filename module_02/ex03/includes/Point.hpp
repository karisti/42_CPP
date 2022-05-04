/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:43:12 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/24 19:20:36 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "../includes/Fixed.hpp"

class Point
{
	private:
		Fixed const		_x;
		Fixed const		_y;
	public:
		Point();
		~Point();
		Point(Point const & p);
		Point(float const x, float const y);
		Point&	operator=(Point & p);
		float	getX(void) const;
		float	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
