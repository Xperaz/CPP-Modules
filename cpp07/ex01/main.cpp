/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:47:05 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/06 11:59:51 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
template <typename T>
void func(T *arr, int len)
{
    for (int i = 0; i < len; i++)
        arr[i] -= 32;
}

int main()
{
    int arr[5] = {132, 232, 332, 432, 532};
    ::iter(arr, 5, func);
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;

    /* float example */
    std::cout << "----------------------\n"; 
    float arr2[5] = {132.10, 232.10, 332.10, 432.10, 532.10};
    ::iter(arr2, 5, func);
    for (int i = 0; i < 5; i++)
        std::cout << arr2[i] << std::endl;

    /* char * example */
     std::cout << "----------------------\n"; 
    std::string str = "test";
    char char_array[str.length()];
    strcpy(char_array, str.c_str());
    ::iter(char_array, str.length(), func);
    std::cout << char_array << std::endl;
    return (0);
}