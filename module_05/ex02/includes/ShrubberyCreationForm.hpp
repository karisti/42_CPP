/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:55:24 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 00:45:50 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "./Form.hpp"


class ShrubberyCreationForm : public Form
{
	private:
		void			doAction() const;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const & shrubbery);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & shrubbery);
		~ShrubberyCreationForm();

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
