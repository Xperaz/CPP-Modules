/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:23:57 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/05 13:40:39 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_) : _weapon(weapon_)
{
    _name = name;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{  
}
