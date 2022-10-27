/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:34:13 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/27 15:04:23 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:
		ClapTrap(std::string	name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		const std::string	&getName() const;
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap &		operator=( ClapTrap const & rhs );

	protected:
		ClapTrap();
		std::string	_name;
		int	_hit;
		int	_energy;
		int	_damage;
};

#endif /* ********************************************************* ClapTrap_H */
