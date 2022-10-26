#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const std::string &name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->attack(ScavTrap::_name);
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	// static_cast<void> (rhs);
	if ( this != &rhs )
	{
		_name = rhs._name;
		_damage = rhs._damage;
		_hit = rhs._hit;
		_energy = rhs._energy;

	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI()
{
	std::cout << this->getName() << " " << typeid(DiamondTrap).name() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
