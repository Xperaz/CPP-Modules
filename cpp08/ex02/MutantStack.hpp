#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:

		MutantStack(){}
		MutantStack( MutantStack const & src ){
			*this = src;
		}

		~MutantStack(){};
	
		MutantStack &		operator=( MutantStack const & rhs ){
			if (this != &rhs)
			{
				this->c = rhs.c;
			}
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin ( void ) 
		{ 
			return  ( this->c.begin ( ) ) ; 
		}

		iterator	end ( void ) 
		{ 
			return  ( this->c.end ( ) ) ; 
		}

		typedef typename std::stack<T>::container_type::iterator const_iterator;
		const_iterator	begin ( void ) const
		{ 
			return  ( this->c.begin ( ) ) ; 
		}

		const_iterator	end ( void ) const
		{ 
			return  ( this->c.end ( ) ) ; 
		}

		typedef typename std::stack<T>::container_type::iterator reverse_iterator;
		reverse_iterator	rbegin ( void ) 
		{ 
			return  ( this->c.rbegin ( ) ) ; 
		}

		reverse_iterator	rend ( void ) 
		{ 
			return  ( this->c.rend ( ) ) ; 
		}
		
		typedef typename std::stack<T>::container_type::iterator const_reverse_iterator;

		const_reverse_iterator crbegin() const {
			return (this->c.crbegin());
		}

		const_reverse_iterator crend() const {
			return (this->c.crend());
		}



};

#endif
