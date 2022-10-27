/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:26:00 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/27 13:43:11 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{

	public:
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		void	attack(const std::string& target);
		~ScavTrap();
		void guardGate() const;

		ScavTrap &		operator=( ScavTrap const & rhs );

	protected:
		ScavTrap();

};

