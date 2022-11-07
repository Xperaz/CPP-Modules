#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T, typename Bsize>

void	iter(T *arr, Bsize len, void (*fun)(T *arr, Bsize size))
{
	fun(arr, len);
}

template <typename T, typename Bsize>

void func(T *arr, Bsize len)
{
    for (Bsize i = 0; i < len; i++)
        arr[i] -= 32;
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