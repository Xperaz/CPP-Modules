/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:52:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/08/18 11:00:50 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <string.h>
#include "contact.hpp"

class PhoneBook
{
public:
    std::string str[8];
    PhoneBook();
    ~PhoneBook();
};

typedef struct  stdinput
{
    std::string str;
    std::string str1;
    std::string str2;
    std::string str3;
    std::string str4;
    std::string Full;
}   t_info;

char    *CmdToUpper(char *av);
bool    isNumber(std::string str);
void    get_firstName(t_info *info, Contact *contacts);
void    get_lastName(t_info *info, Contact *contacts);
void    get_NickName(t_info *info, Contact *contacts);
Contact *getContact(Contact   *contacts);

#endif