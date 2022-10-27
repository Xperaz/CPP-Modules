#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat default constructor called!" << std::endl;
	Animal::type = "Cat";
	br = new(std::nothrow) Brain();
	if (!br)
		std::cout << "cat can't have brain" << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete br;
	std::cout << "Cat destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
		delete br;
		Brain *temp = new(std::nothrow) Brain();
		temp = rhs.br;
		br = temp;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "cat said meow " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */