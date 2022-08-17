/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:52:17 by aouhadou          #+#    #+#             */
/*   Updated: 2022/08/17 13:05:39 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ft_search(PhoneBook *contacts, std::size_t len)
{
    std::string user;
    std::size_t i;
    std::size_t found;

    std::cout << "search for contact: ";
    std::cin >> user;
    if (isNumber(user))
    {
        int num = std::stoi(user);
        if (num > 8 || num < 0)
            return (-2);
        else
            return (num);
    }
    i = 0;
    while (i < len)
    {
        
        found = contacts->str[i].find(user);
        if (found != std::string::npos)
            return (i);
        i++;
    }
    return(-1);
}

void    call_search(int len, PhoneBook contacts, int *i)
{
    if (len > 0)
    {
        int j = 0;
        while (j < len && j < 8)
        {
            std::cout << j << ": "<< contacts.str[j] << std::endl;
            j++;
        }
    }
    int indx = ft_search(&contacts, *i);
    if (indx == -1 || contacts.str[indx].empty())
        std::cout << "contact not found" << "\n";
    else if (indx == -2)
        std::cout << "Invalid Index{0-7}" << "\n";
    else
        std::cout << indx << "| "<< contacts.str[indx] << std::endl;
}

int main()
{
    PhoneBook contacts;
    Contact   info;
    int       end;
    int       i;
    int       len;

    end = 1;
    i = 0;
    len = 0;
    while (end)
    {
        std::string command;
        
        std::cout << "Enter command: ";
        std::cin >> command;
        char    cmd[command.length()];
        std::strcpy (cmd, command.c_str());
        if (!strcmp("ADD", CmdToUpper(cmd)))
        {
            std::string Full;
            getContact(&info);
            Full = info.getFull();
            std::cout << Full << std::endl;
            if (i > 7)
                i = 0;
            if (i <= 7)
            {
                len++;
                contacts.str[i] = Full;
            }
            else if (len > 7)
                contacts.str[i] = Full;
            Full.erase (Full.begin(), Full.end()); 
            i++;
        }
        else if (!strcmp("SEARCH", CmdToUpper(cmd)))
            call_search(len, contacts, &i);
        else if (!strcmp("EXIT", CmdToUpper(cmd)))
            end = 0;
        else
            std::cout << "command not found"<< std::endl;
        
        
    }
    return (0);
}