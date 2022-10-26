/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:07 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/26 22:04:57 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    
	{
		DiamondTrap di4mondtp("test");

		di4mondtp.attack("Handsome Jack");
		di4mondtp.takeDamage(6);
		di4mondtp.beRepaired(4);
		di4mondtp.takeDamage(3);
		di4mondtp.guardGate();
		di4mondtp.highFivesGuys();
		di4mondtp.whoAmI();
		di4mondtp.beRepaired(8);
		di4mondtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		FragTrap fr4gtp("fragtp");

		fr4gtp.attack("Handsome Jack");
		fr4gtp.takeDamage(6);
		fr4gtp.beRepaired(4);
		fr4gtp.takeDamage(3);
		fr4gtp.highFivesGuys();
		fr4gtp.beRepaired(8);
		fr4gtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ScavTrap sc4vtp("scavtp");

		sc4vtp.attack("Handsome Jack");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ClapTrap cl4ptp("claptp");

		cl4ptp.attack("Handsome Jack");
		cl4ptp.takeDamage(10);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
	}
    return (0);
}
