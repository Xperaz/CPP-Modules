/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:43:36 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/30 08:43:13 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal **an = new(std::nothrow) Animal*[10];
    int j = 0;
    while (j < 10/2)
      an[j++] = new(std::nothrow) Cat;
    while (j < 10)
      an[j++] = new(std::nothrow) Dog; 
    int i = 0;
    while (i < 10)
      an[i++]->makeSound();
    i = 0;
    while (i < 10)
      delete an[i++];
    delete [] an;
    return 0;
}