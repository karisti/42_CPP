/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:10:32 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 17:59:00 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_H
# define HumanB_H

#include <iostream>
#include "../includes/Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
		
	public:
		HumanB(std::string name);
		~HumanB();
		void		attack(void) const;
		void		setWeapon(Weapon& weapon);
};

#endif
