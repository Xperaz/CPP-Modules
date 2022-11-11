/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:50:06 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/10 18:50:07 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int n)
	:N(n), i(0)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->span = rhs.span;
		this->N = rhs.N;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int val)
{
	try
	{
		if (i != N)
		{
			span.push_back(val);
			i++;
		}
		else
			throw std::invalid_argument("your out of bounds");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int		Span::longestSpan()
{
	try
	{
		if (span.size() > 1)
		{
			sort(span.begin(), span.end());
			return (span.back() - span.front());
		}
		throw std::invalid_argument("no span can be found");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

int		Span::shortestSpan()
{
	try
	{
		if (span.size() > 1)
		{
			int diff = INT_MAX;
			for (unsigned long int i = 0; i < span.size() - 1; i++)
				for (unsigned long int j = i + 1; j < span.size(); j++)
            		if (abs(span[i] - span[j]) < diff)
                		diff = abs(span[i] - span[j]);
			return (diff);
		}
		throw std::invalid_argument("no span can be found");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

void Span::print()
{
	for (unsigned int i = 0; i < N; i++)
	{
		std::cout << span[i] << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */