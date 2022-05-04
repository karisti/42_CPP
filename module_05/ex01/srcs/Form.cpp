/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:50:04 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 00:52:27 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : _name(""), _signed(false), _signGrade(150), _execGrade(150)
{
}

Form::Form(std::string const name, int const signGrade, int const execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & form) : _name(form._name), _signed(form._signed), _signGrade(form._signGrade), _execGrade(form._execGrade)
{
}

Form&		Form::operator=(Form const & form)
{
	this->_signed = form._signed;
	return (*this);
}

Form::~Form()
{
}

std::string		Form::getName() const
{
	return (this->_name);
}

bool			Form::getSigned() const
{
	return (this->_signed);
}

int				Form::getSignGrade() const
{
	return (this->_signGrade);
}

int				Form::getExecGrade() const
{
	return (this->_execGrade);
}

void			Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is Too High");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is Too Low");
}

std::ostream&	operator<<( std::ostream & o, Form const & form )
{
	o << form.getName() << ", form sign grade is " << form.getSignGrade() << " and exec grade is " << form.getExecGrade();
	o << ". ";
	if (form.getSigned())
		o << "Is signed";
	else
		o << "Is NOT signed";
	return (o);
}
