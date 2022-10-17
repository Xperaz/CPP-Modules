/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:24:30 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/17 14:55:52 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string  name)
{
    _name = name;
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name <<  " attacks with their " << this->_weapon->getType()<< std::endl;
    else
        std::cout << this->_name <<  " can't attacks " << std::endl;
}

void HumanB::setWeapon(Weapon &wpn)
{
    _weapon = &wpn;
}

std::string HumanB::getWeapon()
{
    return (_weapon->getType());
}
