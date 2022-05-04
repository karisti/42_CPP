/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:40:15 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/17 19:13:40 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class	PhoneBook
{
	private:
		Contact	contact_arry[8];
		int		_pos;
		
	public:
		PhoneBook(void);
		~PhoneBook();
		void	addContact(void);
		void	searchContacts(void) const;
		int		searchContactIdx(void) const;
		int		contactCount(void) const;
		void	printContactFourColsHeader(void) const;
};

#endif
