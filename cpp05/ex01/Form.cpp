/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:45:43 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/29 14:31:38 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
	:name_("pop"), s_grade_(0), ex_grade_(0)
{
}

Form::Form(const std::string name ,const int sgrade, const int exgrade)
	:name_(name), s_grade_(sgrade), ex_grade_(exgrade)
{
	if (s_grade_ < 0 || ex_grade_ < 0)
		throw GradeTooHighException();
	else if (s_grade_ > 150 || ex_grade_ >150)
		throw GradeTooLowException();
}



Form::Form( const Form & src )
	:name_(src.name_), s_grade_(src.s_grade_), ex_grade_(src.ex_grade_)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		indicator_ = rhs.indicator_;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Form const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat br)
{
	if (br.getGrade() <= 150)
		indicator_ = true;
	else
		indicator_ = false;
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Too High");
}


const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
	return ("Too Low");
}

std::string	Form::getName() const
{
	return (name_);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */