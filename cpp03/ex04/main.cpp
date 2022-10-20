/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:07 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/20 12:16:28 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    FragTrap clop("clop");
    FragTrap clap("clap");
    clop.attack("clap");
    clap.takeDamage(150);
    clop.beRepaired(2);
    clap.highFivesGuys();
    return (0);
}
