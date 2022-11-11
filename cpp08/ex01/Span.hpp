/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:50:02 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/10 18:50:03 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <cstdlib>

class Span
{

	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		void		addNumber(int val);
		int			shortestSpan();
		int			longestSpan();
		
		void 		print();

	private:
		std::vector<int> span;
		unsigned int N;
		unsigned	int i;

};

#endif /* ************************************************************ SPAN_H */