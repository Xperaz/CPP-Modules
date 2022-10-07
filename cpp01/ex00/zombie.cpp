/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:39:04 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/07 09:22:46 by aouhadou         ###   ########.fr       */
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
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return tmp_s;
}

Zombie::Zombie()
{
    std::string random;
    int len = std::rand() % 15;
    random = generate_zombie(len);
    name = random;
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
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
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
}

Zombie::~Zombie()
{
    std::cout << getName() << ": deconstructor called!!" << std::endl;
}

std::string Zombie::getName()
{
    return (name);
}

