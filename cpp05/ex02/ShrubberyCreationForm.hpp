#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string	target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		void beSigned(Bureaucrat br);
		void	execute(Bureaucrat const & executor) const;
		int	getSign() const;
		int getExec() const;

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

	private:
		int sign_;
		int exec_;
		std::string	target_;

};


#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */