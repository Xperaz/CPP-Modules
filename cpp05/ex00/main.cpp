/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:47:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/30 22:21:07 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    
   try {
        Bureaucrat  br(100, "clop");
        std::cout << "---------------------------" << std::endl;
        std::cout << br;
        std::cout << "---------------------------" << std::endl;
        br.increment();
        std::cout << br;
        std::cout << "---------------------------" << std::endl;
        br.decrement();
        std::cout << br;
        std::cout << "---------------------------" << std::endl;
        br.increment();
        std::cout << br;
        std::cout << "---------------------------" << std::endl;
    }
    catch (const std::exception& myCustomException) {
        std::cout << myCustomException.what() << std::endl;
    }
    
    return (0);
}