/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:06:16 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/27 14:11:34 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
	:_hit(10), _energy(10), _damage(0)
{
	std::cout << "default constructor called!!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:_name(name), _hit(10), _energy(10), _damage(0)
{
	std::cout << "prameterized constructor called!!" << std::endl;
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
	std::cout << "destructor called!!" << std::endl;
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

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string	&target)
{
	if (this->_hit > 0 && this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << this->_name << " attacks " << target << " causing " << this->_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > 0)
		this->_hit -= amount;
	else
		std::cout << this->_name << " is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_hit += amount;
		this->_energy -= 1;	
	}
	else
		std::cout << " don't have enough point to be repaired" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
