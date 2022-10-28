#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form( Form const & src );
		~Form();

		int getIndicator() const;
		int getSinedGrade() const;
		int getExecuteGrade() const;

		void beSigned(Bureaucrat &br);

		Form &		operator=( Form const & rhs );

	private:
		const std::string	name_;
		bool				indicator_;
		const int			s_grade_;
		const int			ex_grade_;


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */