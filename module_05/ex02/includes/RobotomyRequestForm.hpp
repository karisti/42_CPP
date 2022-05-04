/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:57:00 by karisti-          #+#    #+#             */
/*   Updated: 2022/05/03 00:46:25 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <string>
#include <sstream>
#include "./Form.hpp"


class RobotomyRequestForm : public Form
{
	private:
		void			doAction() const;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const & robotomy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & robotomy);
		~RobotomyRequestForm();

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
