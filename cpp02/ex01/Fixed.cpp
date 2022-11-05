/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:41:51 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/03 16:06:13 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
	: _fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int ip)
{
    std::cout << "Int constructor called" << std::endl;
	_fp = ip * (1 << bits);
}

Fixed::Fixed(const float fp)
{
    std::cout << "Float constructor called" << std::endl;
	_fp = roundf(fp * (1 << bits));
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- CONVERSIONS --------------------------------
*/

float Fixed::toFloat( void ) const
{
    return ((float)_fp / (float)(1 << bits));  
}

int Fixed::toInt( void ) const
{
    return (_fp / (1 << bits));   
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD EQUAL ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fp = rhs._fp;
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp);
}

void	Fixed::setRawBits(int const raw)
{
	_fp = raw;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
