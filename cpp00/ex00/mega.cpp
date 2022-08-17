/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mega.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:15:22 by aouhadou          #+#    #+#             */
/*   Updated: 2022/08/07 16:49:37 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mega.hpp"

void    mega_phone(char *av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if (av[i] >= 'a' && av[i] <= 'z')
            std::cout << (unsigned char)std::toupper(av[i]);
        else
            std::cout << av[i];
        i++;
    }
}

int main(int ac, char **av)
{
    int i;
    
    if (ac > 1)
    {
        i = 1;
        while (i < ac)
        {
            mega_phone(av[i]);
            if (i != ac - 1)
                std::cout << " ";
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}