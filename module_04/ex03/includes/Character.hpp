/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:36 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/29 20:04:45 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "./AMateria.hpp"

class Character : public ICharacter
{
	private:
		static const int	_inventorySize = 4;

		AMateria			*_inventory[Character::_inventorySize];
		int					_materiaAmount;
		std::string			_name;

	public:
		Character();
		Character(std::string name);
		Character(Character const & character);
		virtual		~Character();

		Character	&operator=(Character const & character);

		std::string const&		getName() const;
		void					equip(AMateria* m);
		void					unequip(int idx);
		void					use(int idx, ICharacter & target);
};

#endif
