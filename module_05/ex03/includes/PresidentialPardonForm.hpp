/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:57:23 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 00:46:18 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string>
#include <sstream>
#include "./Form.hpp"


class PresidentialPardonForm : public Form
{
	private:
		void			doAction() const;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const & presidential);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & presidential);
		~PresidentialPardonForm();

		virtual void	execute(Bureaucrat const & executor) const;
};


#endif
