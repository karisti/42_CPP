/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:25:01 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/23 20:22:54 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>

class Karen
{
	private:
		std::string	_level_str;
		int			_min_level;
		int			getMinLevel(void);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void		insignificant(void);
	public:
		Karen(std::string level);
		~Karen();
		void		complain(void);
};

#endif
