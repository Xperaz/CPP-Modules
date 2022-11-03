/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:58:34 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/03 18:35:24 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string	target)
	:Form("RobotomyRequestForm", 72, 45), target_(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "Robotomy Request destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		target_ = rhs.target_;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *RobotomyRequestForm::NotSignedException::what() const throw()
{
	return ("Form not signed!");
}

const char *RobotomyRequestForm::GradeNotHighEnoughException::what() const throw()
{
	return ("Grade Not high enough!");
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (getIndicator() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getExecuteGrade())
		throw GradeNotHighEnoughException();
	srand(time(NULL));
	int state = std::rand() % 10 + 1;
	if (state % 2 == 0)
		std::cout << target_ << " has been robotomized successfully 50\% of the time " << std::endl;
	else
		std::cout << " 50\% of robotomy failed. " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */