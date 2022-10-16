/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:22:39 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/10 16:15:09 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "level: (DEBUG) Debug messages contain contextual information. They are mostly used for problem diagnosis."
    "Example: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void    Harl::info()
{
    std::cout << "level: (INFO) These messages contain extensive information. They are helpful for tracing program execution in a production environment."
    "Example: \"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\"" << std::endl;
}

void    Harl::warning()
{
    std::cout << "level: (WARNING) Warning messages indicate a potential issue in the system.However, it can be handled or ignored."
    "Example: \"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\"" << std::endl;
}

void    Harl::error()
{
    std::cout << "level: (ERROR) These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention."
    "This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void Harl::complain(std::string level)
{
    int     i;
    int     not_found;
    void    (Harl::*p[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levs[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    not_found = 0;
    i = 0;
    while (i < 4)
    {
        void (Harl::*f)(void) = p[i];
        if (levs[i] == level){
            not_found = 1;
            (this->*f)();
            break;
        }
        i++;
    }
    if (not_found != 1)
        std::cout << " this level doesn't exist !" << std::endl;
    
}

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}