/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:36:38 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/01 17:19:48 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string	target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		class GradeNotHighEnoughException : public std::exception
		{
		public:
			const char * what() const _NOEXCEPT;
		};

		class NotSignedException : public std::exception
		{
		public:
			const char * what() const _NOEXCEPT;
		};
		private:
			std::string	target_;

};


#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */