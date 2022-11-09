#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>

class Array
{

	public:

		Array<T>() : len(0), arr(NULL){}

		Array<T>(unsigned int n){
			len = n;
			arr = new(std::nothrow) T [len];
			if (!arr)
			{
				std::cout << "bad allocation" << std::endl;
				exit(1);
			}
		}

		Array( const Array & src ){
			len = src.len;
			arr = new(std::nothrow) T[len];
			for (unsigned int i = 0; i < len; i++)
				arr[i] = src.arr[i];
			*this = src;
		}
		
		~Array<T>(void){std::cout << "destructor called!\n";}

		Array &		operator=( const Array & rhs ){
			if (this == &rhs)
				return (*this);
			delete []arr;
			if (rhs.arr == NULL || rhs.len == 0)
				throw std::exception();
			len = rhs.len;
			arr = new(std::nothrow) T[len];
			if (arr == NULL)
				throw std::exception();
			*arr = *(rhs.arr);
			return (*this);
		}

		T & operator[](int Index){
			if (Index >= static_cast<int> (len) || Index < 0)
				throw std::exception();
			return arr[Index];
		}
		unsigned int size() const{
			return (len);
		}

	private:
		unsigned int len;
		T *arr;

};

#endif /* *********************************************************** ARRAY_H */
