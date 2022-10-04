/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:21:09 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/03 11:15:48 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie l("just test");
    Zombie s;
    Zombie *p;
    p = s.newZombie("ptr_zom");
    s.randomChump("random");
    delete (p);
    return (0);
}

