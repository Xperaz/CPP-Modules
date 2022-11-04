/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:08 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/04 14:49:00 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <cmath>

void	to_int(std::string arg)
{
	int interger = std::atoi(arg.c_str());
	if (interger == 0 && arg != "0")
	{
		std::cout << "Int: Impossible" << std::endl;
		return ;
	}
	std::cout << "Int: " << interger << std::endl;
}

void	to_float(std::string arg)
{
	float f_value = std::atof(arg.c_str());
	if (f_value == 0 && arg != "0")
		std::cout << "Float: Impossible" << std::endl;
	else if (std::isnan(f_value) || std::isinf(f_value))
		std::cout << "Float: " << f_value << 'f' << std::endl;
	else if (f_value == static_cast<int>(f_value))
		std::cout << "Float: " << f_value << ".0f" << std::endl;
	else
		std::cout << "Float: " << f_value << 'f' << std::endl;
}

void	to_double(std::string arg)
{
	double d_value = std::strtod(arg.c_str(), NULL);
	if (d_value == 0 && arg != "0")
		std::cout << "Float: Impossible" << std::endl;
	else if (d_value == static_cast<int>(d_value))
		std::cout << "Float: " << d_value << ".0" << std::endl;
	else
		std::cout << "double: " << d_value << std::endl;
}

void	to_char(std::string arg)
{
	int interger = std::atoi(arg.c_str());
	char c;
	c = interger;
	if (interger == 0 && arg != "0")
	{
		std::cout << "Int: Impossible" << std::endl;
		return ;
	}
	if (std::isprint(c))
		std::cout << "char: '" << c << '\''<< std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

int main(int ac, char **av)
{
	std::string arg;
	if(ac == 2)
	{
		arg = static_cast<std::string> (av[1]);
		to_char(arg);
		to_int(arg);
		to_float(arg);
		to_double(arg);
	}
	return (0);
}
