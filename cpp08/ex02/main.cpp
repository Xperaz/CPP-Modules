/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:00:44 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/11 12:07:10 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "top of stack: " << mstack.top() << std::endl;

    std::cout << "----------------- iterators tests---------------------" << std::endl;
    
    MutantStack<int>::reverse_iterator rit;
    
    for (rit = mstack.rbegin(); rit != mstack.rend(); rit++)
            std::cout << *rit << " ";
    std::cout << "\n";

    MutantStack<int>::const_reverse_iterator citr;
    for (citr  = mstack.crbegin(); citr  != mstack.crend(); citr++)
            std::cout << *citr  << " ";

    std::cout << "\n------------- size of stack -------------" << std::endl;
    std::cout << mstack.size() << std::endl;
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "------------- print stack content-------------" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "------------- copy stack and print copied stack content-------------" << std::endl;
    MutantStack<int> mstack1;
    mstack1 = mstack;

    MutantStack<int>::iterator it2 = mstack1.begin();
    MutantStack<int>::iterator ite2 = mstack1.end();
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
   std::stack<int> s(mstack);
   MutantStack<int, std::vector<int> > mstack4;
   std::stack<int, std::vector<int> > t(mstack4);
    return 0;
}