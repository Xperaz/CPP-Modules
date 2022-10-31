/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:53:32 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/31 20:11:13 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:sign_(145), exec_(137), target_(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		sign_ = rhs.sign_;
		exec_ = rhs.exec_;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int ShrubberyCreationForm::getSign() const
{
	return (sign_);
}

int ShrubberyCreationForm::getExec() const
{
	return (exec_);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (Form::getIndicator() == true && Form::getExecuteGrade() == exec_)
		{
			Bureaucrat::executor.signForm(*this);
			std::ofstream outfile;
			//target_ += "_shrubbery";
			outfile.open(target_);
			outfile << "ascii tree" << std::endl;
			outfile.close();
		}
		else
			throw GradeTooHighException();
			 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */