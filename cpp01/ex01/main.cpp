/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:21:09 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/12 10:18:04 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    Zombie  *zmb = NULL;

    zmb = zmb->zombieHorde(5, "more brainz");
    delete[] zmb;
    return (0);
}

