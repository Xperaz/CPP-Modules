#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
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
		std::string target_;

};


#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */