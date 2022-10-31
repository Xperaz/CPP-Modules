/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:47:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/31 10:49:28 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat br(140, "per");
        Form  fr("clop", 150, 100);
        std::cout << "---------------------------" << std::endl;
        std::cout << fr;
        std::cout << "---------------------------" << std::endl;
        br.signForm(fr);
        std::cout << fr;
        std::cout << "---------------------------" << std::endl;
        std::cout << fr;
        std::cout << "---------------------------" << std::endl;
        std::cout << fr;
        std::cout << "---------------------------" << std::endl;
    }
    catch (const std::exception& myCustomException) {
        std::cout << myCustomException.what() << std::endl;
    }
    
    return (0);
}

 