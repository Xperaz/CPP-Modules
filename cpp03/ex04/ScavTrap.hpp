/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:26:00 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/20 11:42:49 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap
{

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		void guardGate();

		ScavTrap &		operator=( ScavTrap const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );
