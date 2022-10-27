/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:18 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/27 13:42:07 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

	public:

		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();
		void highFivesGuys(void);
		FragTrap &		operator=( FragTrap const & rhs );

	protected:
		FragTrap();
		
};

