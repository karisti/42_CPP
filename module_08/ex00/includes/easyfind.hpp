/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:11:33 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 14:19:05 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template<typename T>
typename T::const_iterator	easyfind(T & container, int num)
{
	typename T::const_iterator		it;

	it = std::find(container.begin(), container.end(), num);

	if (*it != num)
		throw std::runtime_error("Number not found");

	return (it);
}

#endif
