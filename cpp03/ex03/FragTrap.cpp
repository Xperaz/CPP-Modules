#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	ClapTrap::_hit = 100;
	ClapTrap::_energy = 100;
	ClapTrap::_damage = 30;
	std::cout << "FragTrap default constructor called!!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	ClapTrap::_name = name;
	ClapTrap::_hit = 100;
	ClapTrap::_energy = 100;
	ClapTrap::_damage = 30;
	std::cout << "FragTrap prameterized constructor called!!" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap Copy constructor called!!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		_damage = rhs._damage;
		_energy = rhs._energy;
		_hit = rhs._hit;
		_name = rhs._name;	
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void FragTrap::highFivesGuys(void)
{
	std::cout << "High five" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
