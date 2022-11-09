/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:00:44 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/09 16:18:08 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

    try
    {
        int n = 10;
        Span sp = Span(n);
        srand(time(0));
        for (int i = 0; i < n; i++)
        {
            int add = rand() % 10000; 
            sp.addNumber(add);
        }
        
    
        sp.print();
        
        std::cout << "-------------------------" << std::endl;
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return(0);
}