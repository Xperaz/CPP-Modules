/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:06:16 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/16 19:53:26 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
	:_hit(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called!!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:_name(name), _hit(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap prameterized constructor called!!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called!!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_energy = rhs._energy;
		this->_hit = rhs._hit;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string	&target)
{
	if (this->_hit > 0 && this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > 0)
		this->_hit -= amount;
	if (this->_hit <= 0 || this->_energy <= 0)
		std::cout << this->_name << " is dead " << std::endl;
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_energy)
	{
		this->_hit += amount;
		this->_energy -= 1;	
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
