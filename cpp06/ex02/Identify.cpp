/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:38:00 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/07 20:38:01 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base    *generate(void)
{
    srand(time(0));
    int sign = 1 + rand() % 3;
    if (sign == 1)
        return (new(std::nothrow) A());
    else if (sign == 2)
        return (new(std::nothrow) B());
    else
        return (new(std::nothrow) C());
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "A" << std::endl;
        return;
    }
    else if (dynamic_cast<B *>(p))
    {
        std::cout << "B" << std::endl;
        return;
    }
    else if (dynamic_cast<C *>(p))
    {
        std::cout << "C" << std::endl;
        return;
    }
    std::cout << "this cast can't be done" << std::endl;
}

void identify(Base &p)
{
    Base tmp;
    try
    {
        tmp = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            tmp = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                tmp = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "can't be casted Because of " << e.what()<<'\n';
            }
            
        }
        
    }
    
}
