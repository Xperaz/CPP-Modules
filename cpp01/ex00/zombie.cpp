/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:39:04 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/12 12:59:51 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

std::string generate_zombie(int len)
{
     static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    int             i;
    
    tmp_s.reserve(len);
    i = 0;
    while (i < len)
    {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
        i++;
    }
    return tmp_s;
}

Zombie::Zombie()
{
    std::string random;
    int len = std::rand() % 15;
    random = generate_zombie(len);
    name = random;
    announce();
}

void Zombie::announce(void)
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name_)
{
    if (!(name_.empty()))
    {
        name = name_;
        announce();
    }
}

Zombie::~Zombie()
{
    std::cout << getName() << ": destructor called!!" << std::endl;
}

std::string Zombie::getName()
{
    return (name);
}

