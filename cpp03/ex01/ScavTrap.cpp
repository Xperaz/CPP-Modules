#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	ClapTrap::_hit = 100;
	ClapTrap::_energy = 50;
	ClapTrap::_damage = 20;
	std::cout << "ScavTrap default constructor called!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::_name = name;
	ClapTrap::_hit = 100;
	ClapTrap::_energy = 50;
	ClapTrap::_damage = 20;
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

	void	ScavTrap::attack(const std::string	&target)
{
	if (this->_hit > 0 && this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << this->_name << " shoot " << target << " causing " << this->_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " can't attack" << std::endl;
}

	void ScavTrap::guardGate()
	{
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */