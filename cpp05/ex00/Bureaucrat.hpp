/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:42:54 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/03 18:19:26 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

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
		int					grade_;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */