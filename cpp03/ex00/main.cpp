/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:07 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/27 10:00:58 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clop("clop");
    ClapTrap clap("clap");
    clop.attack("clap");
    clap.takeDamage(15);
    clop.beRepaired(5);
    std::cout << "----------------------" << std::endl;
    clop.attack("clap");
    clap.takeDamage(15);
    clop.beRepaired(2);
    return (0);
}
