/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:39:56 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/03 13:04:03 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *zmb = new Zombie[N];
    
    int i = 0;
    while (i < N)
    {
        zmb[i]._name = name;
        zmb->announce();
        i++;
    }
    return (zmb);
}
