/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:44:03 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/03 18:14:48 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string	target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		void execute(const Bureaucrat &executor) const;

		class GradeNotHighEnoughException : public std::exception
		{
		public:
			const char * what() const throw();
		};

		class NotSignedException : public std::exception
		{
		public:
			const char * what() const throw();
		};

	private:
		std::string	 target_;

};


#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */