#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog default constructor called!" << std::endl;
	Animal::type = "Dog";
	br = new(std::nothrow) Brain();
	if (!br)
		std::cout << "dog can't have brain" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete br;
	std::cout << "Dog destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
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

void Dog::makeSound() const
{
	std::cout << "dog said bark" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */