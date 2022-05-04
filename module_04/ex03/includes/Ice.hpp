/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:19:43 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/30 11:22:01 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "./AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & ice);
		virtual	~Ice();

		Ice&			operator=(Ice const & ice);

		AMateria*		clone() const;
		void			use(ICharacter & target);
};

#endif
