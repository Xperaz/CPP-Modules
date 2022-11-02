/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:43:36 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/30 08:44:11 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  int n = 10;
  Animal **an = new(std::nothrow) Animal*[n];
  int j = 0;
  while (j < n/2)
    an[j++] = new(std::nothrow) Cat;
  while (j < n)
    an[j++] = new(std::nothrow) Dog;
  int i = 0;
  while (i < n)
    an[i++]->makeSound();
  i = 0;
  while (i < n)
    delete an[i++];
  delete [] an;
  return 0;
}