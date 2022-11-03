/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:43:18 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/03 18:18:32 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{

	public:
		Form();
		Form(const std::string name, const int sgrade, const int exgrade);
		Form( Form const & src );
		~Form();

		int getIndicator() const;
		int getSinedGrade() const;
		int getExecuteGrade() const;
		std::string	getName() const;

		void beSigned(Bureaucrat br);

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
