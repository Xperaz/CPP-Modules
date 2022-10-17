/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:22:20 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/17 14:55:43 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon      *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    void    setWeapon(Weapon &wpn);
    std::string getWeapon();
    void attack();
    ~HumanB();
};

