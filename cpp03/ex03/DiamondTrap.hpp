/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:06:57 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/21 11:05:13 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap(const std::string &name_);
		DiamondTrap( DiamondTrap const & src );
		void whoAmI();
		std::string getName()
		{
			return (_name);
		}
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

	private:
		DiamondTrap();
		std::string _name;
		
		
};

//std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );
#endif

