/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:28:18 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/03 10:18:01 by aouhadou         ###   ########.fr       */
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
    std::string name;
public:
    Zombie();
    Zombie(std::string name_);
    Zombie  *newZombie(std::string name);
    void randomChump(std::string name);
    void announce(void);
    std::string getName();
    ~Zombie();

};

//std::string generate_zombie(int len);

# endif
