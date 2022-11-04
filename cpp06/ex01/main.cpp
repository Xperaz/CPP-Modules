/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:08 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/04 16:13:41 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data *p = new Data;
	int *value = new int(1000);
	p->ptr = value;
	uintptr_t pt = serialize(p);
	Data *p2 = deserialize(pt);
	
	std::cout << p << std::endl;
	std::cout << p2 << std::endl;
	std::cout << "----------- values --------------" << std::endl;
	std::cout << *(int *)(p->ptr) << std::endl;
	std::cout << *(int *)p->ptr << std::endl;
	std::cout << *(int *)p2->ptr << std::endl;
	return (0);
}
