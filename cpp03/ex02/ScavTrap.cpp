#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:ClapTrap(name)
{
	std::cout << "ScavTrap prameterized constructor called!!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap Copy constructor called!!"  << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "ScavTrap Assignement Operator called!!" << std::endl;
	if ( this != &rhs )
	{
		this->_damage = rhs._damage;
		this->_energy = rhs._energy;
		this->_hit = rhs._hit;
		this->_name = rhs._name;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

	void ScavTrap::guardGate()
	{
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
