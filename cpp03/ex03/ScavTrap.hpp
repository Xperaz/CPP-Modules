/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:26:00 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/21 10:31:26 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap
{

	public:
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		void guardGate();

		ScavTrap &		operator=( ScavTrap const & rhs );

	protected:
		ScavTrap();

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif
