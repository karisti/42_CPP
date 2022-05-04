/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:11:33 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 12:30:48 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>


template<class T>
void	iter(T *array, size_t size, void (*func)(T const &))
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

template<class T>
void	print_val(T const & val)
{
	std::cout << val << std::endl;
}

#endif
