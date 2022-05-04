/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:11:33 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 12:14:47 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>


template<class T>
void		swap(T & a, T & b)
{
	T aux = a;
	a = b;
	b = aux;
}

template<class T>
T const &	max(T const & a, T const & b)
{
 return (a > b ? a : b);
}

template<class T>
T const &	min(T const & a, T const & b)
{
 return (a < b ? a : b);
}


#endif
