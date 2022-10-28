/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:47:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/28 16:54:59 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  br(2);
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
    
    return (0);
}