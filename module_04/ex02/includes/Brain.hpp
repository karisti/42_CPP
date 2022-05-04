/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 13:53:40 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/18 16:40:02 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string		_ideas[100];

	public:
		Brain();
		Brain(Brain const & brain);
		~Brain();
		Brain&		operator=(Brain const & brain);
		void		setIdea(int i, std::string idea);
		std::string	getIdea(int i) const;
};


#endif
