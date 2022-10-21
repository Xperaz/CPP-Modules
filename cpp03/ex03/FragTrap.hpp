/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:18 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/21 10:31:16 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap:virtual public ClapTrap
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

#endif
