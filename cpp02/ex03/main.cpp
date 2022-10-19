/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:34:16 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/19 19:24:12 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    
    Point a(1.0, -2.0), b(10.0, 2.0), c(1.0, 4.0), myPoint(2, 2);

    bool bsp_ = bsp(a, b, c, myPoint);
    std::cout << bsp_ <<  " " << std::endl;
    return 0;
}
