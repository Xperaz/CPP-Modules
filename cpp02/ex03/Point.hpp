/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:41:40 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/17 18:54:24 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{

	public:
		Point();
		Point(const float x_, const float y_);
		Point( Point const & src );
		~Point();

		Point &		operator=( Point const & rhs );

	private:
		Fixed const _x;
		Fixed const _y;

};

std::ostream &			operator<<( std::ostream & o, Point const & i );
