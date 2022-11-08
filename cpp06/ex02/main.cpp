/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:37:53 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/07 23:16:58 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
    {
        Base *res = generate();
        identify(res);
    }
    {
        A x;
        Base &p = x;
        identify(p);
    }
    {
        B x;
        Base &p = x;
        identify(p);
    }
    {
        C x;
        Base &p = x;
        identify(p);
    }
    return (0);
}