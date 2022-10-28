#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(unsigned int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		void sighnForm();
		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		const std::string	name_;
		int					grade_;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */