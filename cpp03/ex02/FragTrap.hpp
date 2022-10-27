/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:18 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/27 11:16:19 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{

	public:

		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		void	attack(const std::string& target);
		~FragTrap();
		void highFivesGuys(void);
		FragTrap &		operator=( FragTrap const & rhs );

	private:
		FragTrap();
		
};

