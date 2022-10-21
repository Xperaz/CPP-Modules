/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:34:16 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/21 16:02:48 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    
    Point a(1.0, 1.0), b(-1.0, -1.0), c(-2.0, 2.0), myPoint(-1.0, 1.0);

    bool bsp_ = bsp(a, b, c, myPoint);
    std::cout << bsp_ <<  " " << std::endl;
    return 0;
}
