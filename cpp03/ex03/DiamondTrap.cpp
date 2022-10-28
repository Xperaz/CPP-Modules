#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
{
	std::cout << "DiamondTrap parametrized constructor called!" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs._name;
		_name = rhs._name;
		_damage = rhs._damage;
		_hit = rhs._hit;
		_energy = rhs._energy;

	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int DiamondTrap::getName()
{
	return (_damage);
}

void DiamondTrap::whoAmI()
{
	std::cout << this->getName() << " " << ClapTrap::_name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
