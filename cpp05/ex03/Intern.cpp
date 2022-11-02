/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:29:47 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/02 13:44:06 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	static_cast<void> (rhs);
	return *this;
}

const char *Intern::FormNotCreated::what() const _NOEXCEPT
{
	return ("Form not created");
}

/*
** --------------------------------- METHODS ----------------------------------
*/


Form	*Intern::MakeShrubberyCreationForm(std::string target)
{
	Form *tmp = new ShrubberyCreationForm(target);
	return (tmp);
}

Form	*Intern::MakeRobotomyRequestForm(std::string target)
{
	Form *tmp = new RobotomyRequestForm(target);
	return (tmp);
}

Form	*Intern::MakePresidentialPardonForm(std::string target)
{
	Form *tmp = new PresidentialPardonForm(target);
	return (tmp);
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	try
	{
		int i;
		Form*	(Intern::*forms[3])(std::string) = {&Intern::MakeShrubberyCreationForm, &Intern::MakeRobotomyRequestForm, &Intern::MakePresidentialPardonForm};
		std::string names[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	
		i = 0;
		while (i < 3)
		{
			Form* tmp = (this->*forms[i])(target);
			if (formName == names[i])
			{
				std::cout << "Intern Creates " << tmp->getName() << std::endl;
				return (tmp);
			}
			i++;
		}
		while (i == 3)
			throw FormNotCreated();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */