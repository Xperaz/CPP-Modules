/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:52:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/08/17 12:40:59 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <string.h>

class PhoneBook
{
public:
    std::string str[8];
    // PhoneBook();
    // ~PhoneBook();
};

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    std::string full;
public:
    //First Name set and get
    std::string  getFirstName()
    {
        return (firstName);
    }

    void    setFirstName(std::string info)
    {
        firstName = info;
    }

    //last Name set and get
    std::string  getlastName()
    {
        return (lastName);
    }

    void    setlastName(std::string info)
    {
        lastName = info;
    }

    //Nick Name set and get
    std::string  getNickName()
    {
        return (nickName);
    }

    void    setNickName(std::string info)
    {
        nickName = info;
    }
    
    //Phone Number set and get
    std::string  getPhoneNumber()
    {
        return (phoneNumber);
    }

    void    setPhoneNumber(std::string info)
    {
        phoneNumber = info;
    }
    
    //Darkest secret set and get
    std::string  getDarkestSecret()
    {
        return (darkestSecret);
    }

    void    setDarkestSecret(std::string info)
    {
        darkestSecret = info;
    }

    //Full set and get
    std::string  getFull()
    {
        return (full);
    }

    void    setFull(std::string info)
    {
        full = info;
    }
    
    // Contact();
    // ~Contact();
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

// Contact::Contact()
// {
//     std::cout << "Contact constructor called!!" << "\n";
// }

// Contact::~Contact()
// {
//     std::cout << "Contact destructor called!!" << "\n";
// }

// PhoneBook::PhoneBook()
// {
//     std::cout << "PhoneBook constructor called!!" << "\n";
// }

// PhoneBook::~PhoneBook()
// {
//     std::cout << "PhoneBook destructor called!!" << "\n";
// }


char    *CmdToUpper(char *av);
bool    isNumber(std::string str);
void    get_firstName(t_info *info, Contact *contacts);
void    get_lastName(t_info *info, Contact *contacts);
void    get_NickName(t_info *info, Contact *contacts);
Contact *getContact(Contact   *contacts);

#endif