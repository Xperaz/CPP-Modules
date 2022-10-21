/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:07 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/17 17:56:51 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap clop("clop");
    FragTrap clap("clap");
    clop.attack("clap");
    clap.takeDamage(150);
    clop.beRepaired(2);
    clap.highFivesGuys();

    FragTrap pep("pep");
    FragTrap mor("mor");
    pep.attack("mor");
    mor.takeDamage(50);
    pep.beRepaired(2);
    mor.highFivesGuys();
    return (0);
}
