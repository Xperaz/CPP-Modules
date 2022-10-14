/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:07 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/14 17:55:46 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clop("clop");
    ClapTrap cl2("clap");
    clop.attack("clap");
    cl2.takeDamage(15);
    clop.beRepaired(2);

    return (0);
}
