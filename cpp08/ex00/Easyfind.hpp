/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:32:24 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/09 13:33:07 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

template <typename T>

void	easyfind(T p, int n)
{
	typename T::iterator it;
	for (it = p.begin(); it != p.end(); ++it)
	{
		if ( *it == n)
		{
			std::cout << "value found in : "  << std::distance(p.begin(), it) << std::endl;
			return;
		}
	}
	
	std::cout << "value not found\n";

}
#endif /* ******************************************************** EASYFIND_H */