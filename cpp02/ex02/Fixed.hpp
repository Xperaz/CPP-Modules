/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:04:56 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/24 11:55:59 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(const int ip);
		Fixed(const float fp);
		Fixed( Fixed const & src );
		~Fixed();

		float toFloat( void ) const;
		int toInt( void ) const;
		
		/*
		** --------------------------------- ARITHMETIC OPERATORS ---------------------------------
		*/
	
		Fixed &		operator=( Fixed const & rhs );
		Fixed &		operator+( Fixed const & rhs );
		Fixed &		operator*( Fixed const & rhs );
		Fixed &		operator-( Fixed const & rhs );
		Fixed &		operator/( Fixed const & rhs );
		
		/*
		** --------------------------------- COMPARISON OPERATORS ---------------------------------
		*/
		
		bool	operator>( Fixed fp_ );
		bool	operator<( Fixed fp_ );
		bool	operator==( Fixed fp_ );
		bool	operator>=( Fixed fp_ );
		bool	operator<=( Fixed fp_ );
		bool	operator!=( Fixed fp_ );

		/*
		** --------------------------------- INCREMENT AND DECREMENT---------------------------------
		*/
		
		Fixed	& operator ++ ();
		Fixed	operator ++(int);
		
		/*
		** --------------------------------- USEFUL FUNTS ---------------------------------
		*/

		static Fixed	& min(Fixed &t1, Fixed &t2);
		static const Fixed	& min(Fixed const & t1, Fixed const &t2);
		static Fixed	& max(Fixed &t1, Fixed &t2);
		static const Fixed	& max(Fixed const &t1, Fixed const &t2);
	
	private:
		int _fp;
		static const int bits = 8;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif
