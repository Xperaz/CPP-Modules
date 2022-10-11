#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
	: _fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- SETRAWBITS --------------------------------
*/

void	Fixed::setRawBits(int const raw)
{
	_fp = raw;
}

/*
** -------------------------------- GETRAWBITS --------------------------------
*/

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fp = rhs.getRawBits();
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.getRawBits() << '/' << i.getRawBits();
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
