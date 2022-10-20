/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:09:53 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/20 17:02:55 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float   triangle_area(Point const a, Point const b, Point const c)
{
    float a1 = (c.getx() * (a.gety() - b.gety()));
    float a2 = (a.getx() * (b.gety() - c.gety()));
    float a3 = (b.getx() * (c.gety() - a.gety()));
    float area =  (a1 + a2 + a3) / 2; 
    if (area < 0)
        area *= -1;
    return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{ 
    float full_area = triangle_area(a, b, c);
    
    float area1 = triangle_area(point, a, c);
    float area2 = triangle_area(point, a, b);
    float area3 = triangle_area(point, b, c);
    
    float add = area1 + area2 + area3;
    if (add == full_area)
        return (1);
    return (0);
}
