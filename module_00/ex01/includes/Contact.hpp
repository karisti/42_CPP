/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:40:12 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/17 19:13:16 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class	Contact
{
	private:
		int			_idx;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		int			_isEmpty;
	public:
		Contact(void);
		~Contact();
		void		setIdx(int idx);
		void		setIsEmpty(int isEmpty);
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickname(std::string nickname);
		void		setPhoneNumber(std::string phone_number);
		void		setDarkestSecret(std::string darkest_secret);
		std::string	getIdx(void) const;
		int			getIsEmpty(void) const;
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
		void		printContactFourColsValue(std::string value) const;
		void		printContactFourCols(void) const;
		int			printContactInLines(void) const;
};

#endif
