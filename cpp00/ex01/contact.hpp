/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:34:09 by aouhadou          #+#    #+#             */
/*   Updated: 2022/08/18 10:59:52 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include    "PhoneBook.hpp"

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
    
    Contact();
    ~Contact();
};

#endif