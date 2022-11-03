/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:53:32 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/03 18:43:34 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137), target_(target)
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
		target_ = rhs.target_;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char *ShrubberyCreationForm::NotSignedException::what() const throw()
{
	return ("Form not signed!");
}

const char *ShrubberyCreationForm::GradeNotHighEnoughException::what() const throw()
{
	return ("Grade Not high enough!");
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (getIndicator() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getExecuteGrade())
		throw GradeNotHighEnoughException();
	std::ofstream outfile;
	std::string file = target_;
	file += "_shrubbery";
	outfile.open(file);
	outfile << "           ,@@@@@@@," << std::endl
                << "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
                << ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
                << ",%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
                   << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
                << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
                   << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
                << "    |o|        | |         | |" << std::endl
                << "    |.|        | |         | |" << std::endl
                << " \\/ ._\\/\\/_/__/  ,\\_//__\\/.  \\_//__/_";
	outfile.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */