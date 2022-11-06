/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:18:02 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/06 10:41:05 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
template<typename T>

void	swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template<typename T>
T min(const T &a, const T &b)
{
	return ((a > b) ? b : a);
}

template<typename T>
T max(const T &a, const T &b)
{
	return ((a > b) ? a : b);
}

// class Whatever
// {

// 	public:

// 		Whatever();
// 		Whatever( Whatever const & src );
// 		~Whatever();

// 		Whatever &		operator=( Whatever const & rhs );

// 	private:

// };

// std::ostream &			operator<<( std::ostream & o, Whatever const & i );

#endif /* ******************************************************** WHATEVER_H */