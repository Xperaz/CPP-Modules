/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:37:10 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/07 20:37:11 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"


uintptr_t serialize(Data* ptr)
{
	uintptr_t uin = reinterpret_cast<uintptr_t>(ptr);
	return (uin);
}

Data* deserialize(uintptr_t raw)
{
	Data *p = reinterpret_cast<Data *>(raw);
	return (p);
}