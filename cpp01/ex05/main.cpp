/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:16:40 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/10 15:01:26 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    obj;

    obj.complain("DEBUG");
    std::cout << '\n';
    obj.complain("INFO");
    std::cout << '\n';
    obj.complain("WARNING");
    std::cout << '\n';
    obj.complain("ERROR");
    std::cout << '\n';
    obj.complain("random");
    return (0);
}
