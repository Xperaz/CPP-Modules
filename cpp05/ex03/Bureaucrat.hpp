#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <fstream>
#include <stdlib.h>

#include "form.h"

class Form;

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
		void	signForm(Form &fm);

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		void	executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const _NOEXCEPT;
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const _NOEXCEPT;
		};
		
	private:
		const std::string	name_;
		int					grade_;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */