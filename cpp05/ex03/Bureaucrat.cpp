#include "Bureaucrat.hpp"
#include "Form.hpp"
class Form;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
	:name_("clop")
{
	std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::Bureaucrat(unsigned int grade)
	:name_("clop")
{
	std::cout << "parmetrized constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		grade_ = grade;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor called " << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
		grade_ = rhs.grade_;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << " bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Bureaucrat::getName() const
{
	return (name_);
}

int Bureaucrat::getGrade() const
{
	return (grade_);
}

void Bureaucrat::increment()
{

	if (grade_ > 1)
		grade_ -= 1;
	else
		throw GradeTooHighException();	

}

void Bureaucrat::decrement()
{
	if (grade_ < 150)
		grade_ += 1;
	else
		throw GradeTooLowException();	
}


const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
        return "Grade Too High";
}


const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
        return "Grade Too Low";
}

void	Bureaucrat::signForm(const Form &fm) const
{
	try
	{
		if (fm.getIndicator() == true)
			std::cout << name_ << " signed " << fm.getName() << std::endl;
		else if (fm.getExecuteGrade() <= 0 || fm.getSinedGrade() <= 0)
			throw GradeTooHighException();
		else if (fm.getExecuteGrade() > 150 || fm.getSinedGrade() > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << name_ << " couldn't sign " << fm.getName() << " because "<< e.what() << std::endl;
	}

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */