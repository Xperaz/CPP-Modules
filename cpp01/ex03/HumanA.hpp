/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:21:15 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/05 13:28:33 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &_weapon;
    std::string _name;
public:
    void    attack();
    HumanA(std::string name_, Weapon &weapon_);
    ~HumanA();
};

