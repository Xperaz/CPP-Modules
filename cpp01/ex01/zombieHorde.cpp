/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:39:56 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/09 10:19:50 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *zmb;
    int     i;
    
    if (N <= 0 || name == "")
        return (NULL);
    zmb = new Zombie[N];
    if (!zmb)
        return (NULL);
    i = 0;
    while (i < N)
    {
        zmb[i]._name = name;
        zmb->announce();
        i++;
    }
    return (zmb);
}
