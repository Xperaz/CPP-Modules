/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:36:50 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/03 18:21:11 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

	public:
		Form();
		Form(const std::string name, const int sgrade, const int exgrade);
		Form( Form const & src );
		virtual ~Form();

		int getIndicator() const;
		int getSinedGrade() const;
		int getExecuteGrade() const;
		std::string	getName() const;
		void beSigned(Bureaucrat br);
		
		virtual void	execute(Bureaucrat const & executor) const = 0;

		Form &		operator=( Form const & rhs );


		class GradeTooHighException : public std::exception
		{
		private:
			/* data */
		public:
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		private:
			/* data */
		public:
			const char * what() const throw();
		};
		

	private:
		const std::string	name_;
		bool				indicator_;
		const int			s_grade_;
		const int			ex_grade_;


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif
