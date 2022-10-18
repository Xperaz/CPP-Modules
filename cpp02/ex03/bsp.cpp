/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:09:53 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/18 22:51:00 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << point.getx() << std::endl;

    float area = 1 / 2 * fabs((a.getx() * (b.gety() - c.gety())) + (b.getx() * (c.gety() - a.gety()))
                + (c.getx() * (a.gety() - b.gety())));

    float a1 = fabs((c.getx() * (a.gety() - b.gety())));
    float a2 = fabs((a.getx() * (b.gety() - c.gety())));
    float a3 = fabs((b.getx() * (c.gety() - a.gety())));
    float res =  (a1 + a2 + a3) / 2; 
    std::cout << area << "\n" <<  res << std::endl;
    
    return (0);
}
