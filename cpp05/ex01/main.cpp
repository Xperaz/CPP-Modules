/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:47:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/29 11:25:20 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat  br(10);
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