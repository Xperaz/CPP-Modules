/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:34:13 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/17 11:04:53 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string	name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap &		operator=( ClapTrap const & rhs );

	private:
		std::string	_name;
		int	_hit;
		int	_energy;
		int	_damage;
};

//std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ********************************************************* ClapTrap_H */
