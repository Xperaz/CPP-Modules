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
			const char * what() const _NOEXCEPT;
		};

		class NotSignedException : public std::exception
		{
		public:
			const char * what() const _NOEXCEPT;
		};

	private:
		std::string	 target_;

};


#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */