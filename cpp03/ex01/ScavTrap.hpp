/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:26:00 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/27 10:47:26 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{

	public:
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		void	attack(const std::string& target);
		~ScavTrap();
		void guardGate();

		ScavTrap &		operator=( ScavTrap const & rhs );

	private:
		ScavTrap();

};

