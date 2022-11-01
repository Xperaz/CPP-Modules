#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:Form(target, 25, 5), target_(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		target_ = rhs.target_;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char *PresidentialPardonForm::NotSignedException::what() const _NOEXCEPT
{
	return ("Form not signed!");
}

const char *PresidentialPardonForm::GradeNotHighEnoughException::what() const _NOEXCEPT
{
	return ("Grade Not high enough!");
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (getIndicator() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getExecuteGrade())
		throw GradeNotHighEnoughException();
	std::cout << target_ << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */