/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:00:40 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 20:59:25 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

float	calculateArea(Point const a, Point const b, Point const c)
{
	float	area = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0;
	
	if (area < 0)
		area *= -1;
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	triangleArea = calculateArea(a, b, c);

	float	area1 = calculateArea(point, b, c);
	float	area2 = calculateArea(a, point, c);
	float	area3 = calculateArea(a, b, point);

	return ((triangleArea == area1 + area2 + area3) && area1 != 0 && area2 != 0 && area3 != 0 );
}
