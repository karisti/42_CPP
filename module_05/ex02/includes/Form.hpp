/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:50:22 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 00:01:12 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_execGrade;
		std::string const	_target;
	
	public:
		Form();
		Form(std::string const name, int const signGrade, int const execGrade, std::string const target);
		Form(Form const & form);
		Form&			operator=(Form const & form);
		~Form();

		std::string		getName() const;
		bool			getSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		std::string		getTarget() const;
		void			beSigned(Bureaucrat bureaucrat);
		void			beExecuted(Bureaucrat bureaucrat) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;
		

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

		class FormNotSignedException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

std::ostream&		operator<<( std::ostream & o, Form const & form );

#endif
