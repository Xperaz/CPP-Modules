/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:39:56 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/03 11:09:06 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
    Zombie *zmb = new Zombie(name);
    return (zmb);
}
