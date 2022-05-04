/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:05 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 00:59:36 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
#include "./Form.hpp"


class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

		void				setGrade(int grade);
	
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat( Bureaucrat const & bureaucrat);
		Bureaucrat&		operator=(Bureaucrat const & bureaucrat);
		~Bureaucrat();

		std::string			getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form & form);
		void				executeForm(Form const & form);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

std::ostream&		operator<<( std::ostream & o, Bureaucrat const & bureaucrat );

#endif
