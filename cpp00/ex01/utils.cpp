/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:04:49 by aouhadou          #+#    #+#             */
/*   Updated: 2022/08/17 13:05:44 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool isNumber(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        
        if (std::isdigit(str[i]) == 0) return false;
        i++;
    }
    return true;
}

char    *CmdToUpper(char *av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if (av[i] >= 'a' && av[i] <= 'z')
            av[i] -= 32;
        i++;
    }
    return (av);
}

void    get_firstName(t_info   *info, Contact *contacts)
{
    std::cout << "Enter first Name: ";
    std::cin >> info->str;
    contacts->setFirstName(info->str);
    if (info->str.length() > 10)
    {
        info->str[9] = '.';
        info->str.erase (10, info->str.length() - 10);
        contacts->setFirstName(info->str);
    }
}

void    get_lastName(t_info   *info, Contact *contacts)
{
    std::cout << "Enter Last Name: ";
    std::cin >> info->str1;
    contacts->setlastName(info->str1);
    if (info->str1.length() > 10)
    {
        info->str1[9] = '.';
        info->str1.erase (10, info->str1.length() - 10);
        contacts->setlastName(info->str1);
    }
}

void    get_NickName(t_info   *info, Contact *contacts)
{
    std::cout << "Enter Nick Name: ";
    std::cin >> info->str2;
    contacts->setNickName(info->str2);
    if (info->str2.length() > 10)
    {
        info->str2[9] = '.';
        info->str2.erase (10, info->str2.length() - 10);
        contacts->setNickName(info->str2);
    }
}

Contact *getContact(Contact   *contacts)
{
    t_info  info;
    
    get_firstName(&info, contacts);
    get_lastName(&info, contacts);
    get_NickName(&info, contacts);
    std::cout << "Enter phone Number: ";
    std::cin >> info.str3;
    if (!isNumber(info.str3))
    {
        while (!isNumber(info.str3))
        {
            std::cout << "Please Enter a valid phone Number: ";
            std::cin >> info.str3;
        }
        
    }
    else if (info.str3.length() > 10)
    {
        info.str3[9] = '.';
        info.str3.erase (10, info.str3.length() - 10);
        contacts->setPhoneNumber(info.str3);
    }
    std::cout << "Enter darkest Secret: ";
    std::cin >> info.str4;
    contacts->setDarkestSecret(info.str4);
    if (info.str4.length() > 10)
    {
        info.str4[9] = '.';
        info.str4.erase (10, info.str4.length() - 10);
        contacts->setDarkestSecret(info.str4);
    }
    info.Full.append(contacts->getFirstName()).append("| ").append(contacts->getlastName()).append("| ").append(contacts->getNickName()).append("|");
    contacts->setFull(info.Full);
    return (contacts);
}