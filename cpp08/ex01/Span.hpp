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