/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:21:09 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/03 11:54:04 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str;
    
    str = "HI THIS IS BRAIN";
    
    std::string *stringPtr;
    stringPtr = &str;
    
    std::string &stringRef = str;

    std::cout << &str << "\n";
    std::cout << stringPtr << "\n";
    std::cout << &stringRef << "\n" << std::endl;
    
    std::cout << str << "\n";
    std::cout << *stringPtr << "\n";
    std::cout << stringRef << "\n";
    return (0);
}

