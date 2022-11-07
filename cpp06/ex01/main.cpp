/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:08 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/07 19:07:09 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	{
		Data *p = new Data;
		int *value = new int(1000);
		p->ptr = value;
		uintptr_t pt = serialize(p);
		Data *p2 = deserialize(pt);
		
		std::cout << *(static_cast<int *>(p->ptr) )<< std::endl;
		std::cout << *(static_cast<int *>(p2->ptr) )<< std::endl;
	}
	std::cout << "---------------- try char * ------------------------" << std::endl;
	{
		Data *p = new Data;
		char value[] = "this is string";
		p->ptr = value;
		uintptr_t pt = serialize(p);
		Data *p2 = deserialize(pt);
		
		std::cout << static_cast<char *> (p->ptr) << std::endl;
		std::cout << static_cast<char *> (p2->ptr) << std::endl;
	}
	return (0);
}
