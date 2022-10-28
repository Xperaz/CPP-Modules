#include "Bureaucrat.hpp"

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

// Bureaucrat::Bureaucrat(std::string name)
// 	:name_(name)
// {
// }

Bureaucrat::Bureaucrat(unsigned int grade)
	:name_("clop")
{
	std::cout << "parmetrized constructor called" << std::endl;
	try
	{
		if (grade > 150 || grade < 1)
			throw "invalid grade";
		else
			grade_ = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
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
	try
	{
		if (grade_ > 1)
			grade_ -= 1;
		else
			throw "invalid grade";	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrement()
{
	try
	{
		if (grade_ < 150)
			grade_ += 1;
		else
			throw "invalid grade";	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */