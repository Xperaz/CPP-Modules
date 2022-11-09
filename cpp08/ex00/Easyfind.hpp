#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
#include <algorithm>    // std::find
#include <vector>
#include <iterator>

template <typename T>

void	easyfind(T p, int n)
{
	// typename T::iterator location;
	// location = std::find(p.begin(), p.end(), n);
	// if (location != p.end())
	// 	std::cout << "value found in: " << static_cast<int>(location - p.begin()) << std::endl;
	typename T::iterator it;
	int i = 1;
	for (it = p.begin(); it != p.end(); ++it)
	{
		if ( *it == n)
		{
			std::cout << "value found in : "  << std::distance(p.begin(), it) << std::endl;
			return;
		}
		i++;
	}
	
	std::cout << "value not found\n";

}
#endif /* ******************************************************** EASYFIND_H */