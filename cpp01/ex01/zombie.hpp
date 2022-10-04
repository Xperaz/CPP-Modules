/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:28:18 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/03 17:38:29 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include  <string.h>
#include <unordered_set>
#include <string>


class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    Zombie* zombieHorde( int N, std::string name);
    void announce();
    ~Zombie();

};

# endif
