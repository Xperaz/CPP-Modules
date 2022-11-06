#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>

void	iter(T *arr, int len, void (*fun)(T *arr, int size))
{
	fun(arr, len);
}

// class Iter
// {

// 	public:

// 		Iter();
// 		Iter( Iter const & src );
// 		~Iter();

// 		Iter &		operator=( Iter const & rhs );

// 	private:

// };

// std::ostream &			operator<<( std::ostream & o, Iter const & i );

#endif /* ************************************************************ ITER_H */