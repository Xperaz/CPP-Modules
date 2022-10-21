/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:42:13 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/18 21:43:37 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point()
: _x(0), _y(0)
{
}

Point::Point(const float x_, const float y_)
:_x(x_), _y(y_)
{	
}

Point::Point( const Point & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	if (this != &rhs)
	{
		const_cast<Fixed &> (_x)= rhs._x;
		const_cast<Fixed &> (_y)= rhs._y;
		
	}
	return (*this);
}

// std::ostream &			operator<<( std::ostream & o, Point const & i )
// {
// 	o << "Value = " << i;
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

float	Point::getx() const 
{
	return(_x.toFloat());
}

float	Point::gety() const
{
	return(_y.toFloat());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
