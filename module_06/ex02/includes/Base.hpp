/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:25:40 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 11:49:10 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>

class	Base
{
	public:
		virtual	~Base(){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif
