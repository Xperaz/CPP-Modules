#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
# include <iostream>
# include <string>

class Point
{

	public:
		Point();
		Point(Point const x_, Point const y_);
		Point( Point const & src );
		~Point();

		Point &		operator=( Point const & rhs );

	private:
		Fixed const _x;
		Fixed const _y;

};

std::ostream &			operator<<( std::ostream & o, Point const & i );

#endif /* *********************************************************** POINT_H */
