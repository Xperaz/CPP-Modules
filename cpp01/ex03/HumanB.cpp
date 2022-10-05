/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:24:30 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/05 13:50:05 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string  name)
{
    if (!name.empty())
    {
        std::cout << "\n\n !!!!!!!!!    Name can't be NULL   !!!!!!!" << std::endl;
        exit(0);
    }
    _name = name;
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << this->_name <<  " attacks with their " << this->_weapon->getType()<< std::endl;
}

void HumanB::setWeapon(Weapon wpn)
{
    _weapon = &wpn;
}

std::string HumanB::getWeapon()
{
    return (_weapon->getType());
}
