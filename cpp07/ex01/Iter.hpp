#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>

void	iter(T *arr, unsigned int len, void (*fun)(T &c))
{
	for (unsigned int i = 0; i < len; i++)
        fun(arr[i]);
}


template <typename T>

void func(T &c)
{
    c -= 32;
}


#endif /* ************************************************************ ITER_H */