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
			const char * what() const _NOEXCEPT;
		};

		class GradeTooLowException : public std::exception
		{
		private:
			/* data */
		public:
			const char * what() const _NOEXCEPT;
		};
		

	private:
		const std::string	name_;
		bool				indicator_;
		const int			s_grade_;
		const int			ex_grade_;


};

//std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif
