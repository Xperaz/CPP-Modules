/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:21:09 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/07 09:24:13 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie l("braiiiiinz");
    Zombie s;
    Zombie *p;
    p = s.newZombie("ptr_zom");
    s.randomChump("random");
    delete (p);
    return (0);
}

