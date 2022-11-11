/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:49:53 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/10 21:56:08 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
#include <stack>
#include <deque>
#include <vector>

template <typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
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
		typedef typename Container::iterator iterator;
		iterator	begin ( void ) 
		{ 
			return  (this->c.begin()) ;
		}

		iterator	end ( void ) 
		{ 
			return  (this->c.end()) ; 
		}

		typedef typename Container::const_iterator const_iterator;
		const_iterator	begin ( void ) const
		{ 
			return  (this->c.begin( )) ; 
		}

		const_iterator	end ( void ) const
		{ 
			return  ( this->c.end ( ) ) ; 
		}

		typedef typename Container::reverse_iterator reverse_iterator;
		reverse_iterator	rbegin ( void ) 
		{ 
			return  ( this->c.rbegin ( ) ) ; 
		}

		reverse_iterator	rend ( void ) 
		{ 
			return  ( this->c.rend ( ) ) ; 
		}
		
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		const_reverse_iterator crbegin() const {
			return (this->c.crbegin());
		}

		const_reverse_iterator crend() const {
			return (this->c.crend());
		}

};


#endif
