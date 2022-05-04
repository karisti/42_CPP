/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:20:56 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/30 11:21:59 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "./AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & cure);
		virtual	~Cure();

		Cure&			operator=(Cure const & cure);

		AMateria*		clone() const;
		void			use(ICharacter & target);
};

#endif
