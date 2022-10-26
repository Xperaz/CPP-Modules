/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:43:36 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/26 12:58:25 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal **an = new Animal *[10];

    int j = 0;
    while (j < 10/2)
      an[j++] = new Cat;
    while (j < 10)
      an[j++] = new Dog;
    
    *an[0] = *an[1];    
    for (size_t i = 0; i < 10; i++)
      an[i]->makeSound();
    for (size_t i = 0; i < 10; i++)
      delete an[i];
    delete [] an;
    return 0;
}