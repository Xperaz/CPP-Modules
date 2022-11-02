/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:43:36 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/30 08:46:36 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new(std::nothrow) Animal();
    const Animal* j = new(std::nothrow) Dog();
    const Animal* i = new(std::nothrow) Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    std::cout << "\n---------------------------------\n" << std::endl;

    const WrongAnimal* meta1 = new(std::nothrow) WrongAnimal();
    const WrongAnimal* c = new(std::nothrow) WrongCat();
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    meta1->makeSound();
      std::cout << "\n--------destructors------\n" << std::endl;
    delete meta;
    delete i;
    delete j;
    delete meta1;
    delete c;
   
    return 0;
}