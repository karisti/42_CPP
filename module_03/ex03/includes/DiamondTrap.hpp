/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:41:01 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/04 00:19:22 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>


class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		_name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		void		attack(std::string const & target);
		void		whoAmI();
};


#endif
