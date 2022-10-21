/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:04:56 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/13 12:27:18 by aouhadou         ###   ########.fr       */
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
		// int			getRawBits( void ) const;
		// void		setRawBits( int const raw );
		Fixed &		operator=( Fixed const & rhs );

	private:
		int _fp;
		static const int bits = 8;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif
