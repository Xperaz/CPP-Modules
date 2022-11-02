/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:33:31 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/02 13:32:23 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"
class Form;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form *makeForm(std::string formName, std::string target);
		Form	*MakeShrubberyCreationForm(std::string target);
		Form	*MakeRobotomyRequestForm(std::string target);
		Form	*MakePresidentialPardonForm(std::string target);

		class FormNotCreated : public std::exception
		{
		public:
			const char * what() const _NOEXCEPT;
		};

	private:

};


#endif /* ********************************************************** INTERN_H */