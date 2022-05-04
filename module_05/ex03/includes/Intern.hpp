/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:50:30 by karisti-          #+#    #+#             */
/*   Updated: 2022/03/14 22:03:00 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_H
# define INTERN_H

#include <string>
#include "./Form.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"

class Intern
{
	private:
		Form *forms[3];
	public:
		Intern();
		~Intern();
		Form	*makeForm(std::string name, std::string target);
		
		class	InvalidFormException : public std::exception {
		public:
			const char *what(void) const throw();
	};
};


#endif
