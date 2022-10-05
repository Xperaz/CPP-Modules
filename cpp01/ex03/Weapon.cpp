/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:24:58 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/05 13:45:04 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    this->_type = name;
}

Weapon::~Weapon()
{
}

void    Weapon::setType(std::string type)
{       
     _type = type;
}

std::string& Weapon::getType()
{
    return (_type);
}
