/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:22:39 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/06 20:29:24 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "level: Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl;
    std::cout << "Example: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void    Harl::info()
{
    std::cout << "level: These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl;
    std::cout << "Example: \"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\"" << std::endl;
}

void    Harl::warning()
{
    std::cout << "level: Warning messages indicate a potential issue in the system.However, it can be handled or ignored." << std::endl;
    std::cout << "Example: \"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\"" << std::endl;
}

void    Harl::error()
{
    std::cout << "level: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void Harl::complain(std::string level)
{
    Harl    *p = NULL;
    std::cout << level << '\n' << std::endl;
    int flag = 1;
    switch ("level")
    {
        case "WARNING":
            p->debug();
            std::cout << '\n';
            break;
    
        default:
            std::cout << "invalid level" << std::endl;
            break;
    }
    // p->debug();
    // std::cout << '\n';
    // p->info();
    // std::cout << '\n';
    // p->warning();
    // std::cout << '\n';
    // p->error();
}

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
