/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:06:57 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/20 21:14:50 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap(std::string name_);
		DiamondTrap( DiamondTrap const & src );
		void whoAmI();
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

	private:
		std::string _name;
		
		
};

//std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

