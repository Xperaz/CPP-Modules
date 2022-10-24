/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:41:51 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/24 11:57:19 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
	: _fp(0)
{
}

Fixed::Fixed(const int ip)
{
	_fp = ip * (1 << bits);
}

Fixed::Fixed(const float fp)
{
	_fp = roundf(fp * (1 << bits));
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
}

/*
** --------------------------------- CONVERSION METHODS ----------------------------------
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
}

/*
** --------------------------------- ARITHMETIC OPERATION ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	_fp = rhs._fp;
	return (*this);
}

Fixed &				Fixed::operator+( Fixed const & rhs )
{
	float t1, t2;
	
	t1 = toFloat();
	t2 = rhs.toFloat();
	_fp = t1 + t2;
	//_fp += rhs._fp;
	return (*this);
}

Fixed &				Fixed::operator*( Fixed const & rhs )
{
	float t1, t2;
	t1 = toFloat();
	t2 = rhs.toFloat();
	
	_fp = (t1  * t2) * ( 1 << bits);
	return (*this);
}

Fixed &				Fixed::operator-( Fixed const & rhs )
{
	float t1, t2;
	t1 = toFloat();
	t2 = rhs.toFloat();
	
	_fp = (t1 - t2) * ( 1 << bits);
	return (*this);
}

Fixed &				Fixed::operator/( Fixed const & rhs )
{
	float t1, t2;
	t1 = toFloat();
	t2 = rhs.toFloat();
	
	_fp = (t1 / t2) * ( 1 << bits);
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return (o);
}

/*
** --------------------------------- COMPARISON OPETATORS ---------------------------------
*/

bool	Fixed::operator>(Fixed fp_)
{
	if (_fp > fp_._fp)
		return (1);
	else
		return (0);
}


bool	Fixed::operator<(Fixed fp_)
{
	if (_fp < fp_._fp)
		return (1);
	else
		return (0);
}


bool	Fixed::operator==(Fixed fp_)
{
	if (_fp == fp_._fp)
		return (1);
	else
		return (0);
}


bool	Fixed::operator>=(Fixed fp_)
{
	if (_fp >= fp_._fp)
		return (1);
	else
		return (0);
}



bool	Fixed::operator<=(Fixed fp_)
{
	if (_fp <= fp_._fp)
		return (1);
	else
		return (0);
}



bool	Fixed::operator!=(Fixed fp_)
{
	if (_fp != fp_._fp)
		return (1);
	else
		return (0);
}



Fixed	& Fixed::operator++ ()
{
	_fp++;
	return (*this);
}

Fixed	Fixed::operator++ (int)
{
	Fixed tmp = *this;
	this->_fp++;
	return (tmp);
}


Fixed & Fixed::min(Fixed &t1, Fixed &t2)
{
	if (t1 < t2)
		return (t1);
	return (t2);
}

Fixed & Fixed::min(Fixed const &t1, Fixed const &t2)
{
	if (const_cast<Fixed &>(t1) < const_cast<Fixed &>(t2))
		return (const_cast<Fixed &>(t1));
	return (const_cast<Fixed &>(t2));
}

Fixed	&Fixed::max(Fixed &t1, Fixed &t2)
{
	if (t1 < t2)
		return (t1);
	return (t2);
}

Fixed &Fixed::max(Fixed const &t1, Fixed const &t2)
{
	if (const_cast<Fixed &>(t1) > const_cast<Fixed &>(t2))
		return (const_cast<Fixed &>(t1));
	return (const_cast<Fixed &>(t2));
}

/* ************************************************************************** */
