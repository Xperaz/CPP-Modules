#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <deque>

template <typename T>

class MutantStack
{
	public:

		MutantStack(){}
		MutantStack( MutantStack const & src ){
			*this = src;
		}

		~MutantStack(){};

		void			push(T val){
			stack.push_back(val);
		}

		void			pop(){
			stack.pop_back();
		}

		unsigned int	size(){
			return (stack.size());
		}

		T				top(){
			return (stack.back());
		}

		bool			empty(){
			return (stack.empty());
		}
	
		MutantStack &		operator=( MutantStack const & rhs ){
			if (this != &rhs)
			{
				stack = rhs.stack;
			}
			return (*this);
		}

		// template <typename It>
		// class iterator
		// {
		// private:
		// 	/* data */
		// public:
		// 	iterator(/* args */){};
		// 	~iterator(){};
		// 	It	begin ( void ) 
		// 	{ 
		// 		return  ( ::stack.begin ( ) ) ; 
		// 	}
		// };
		
	private:
		std::deque<T> stack;


};


// template <typename It>

// class iterators : public MutantStack
// {

// 	public:
// 		iterators(/* args */){};
// 		~iterators(){};

// 		iterator	begin ( void ) 
// 		{ 
// 			return  ( this -> It.begin ( ) ) ; 
// 		}
	
// 	private:
// 		iterators<It> iterator;

// };


#endif
