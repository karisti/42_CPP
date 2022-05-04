/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:10:32 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 17:45:04 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "../includes/Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
		
	public:
		HumanA(std::string name, Weapon & weapon);
		~HumanA();
		void		attack(void) const;
		void		setWeapon(Weapon & weapon);
};

#endif
