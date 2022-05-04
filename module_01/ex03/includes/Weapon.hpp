/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:10:36 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 17:45:22 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string		_type;
		
	public:
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string type);
		std::string const &	getType(void) const;
};

#endif
