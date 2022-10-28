/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:06:57 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/28 11:53:46 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap(const std::string &name_);
		DiamondTrap( DiamondTrap const & src );
		void whoAmI();
		int getName();
		~DiamondTrap();
		DiamondTrap &		operator=( DiamondTrap const & rhs );

	private:
		DiamondTrap();
		std::string _name;
		
		
};

#endif

