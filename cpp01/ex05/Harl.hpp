/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:14:21 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/06 17:36:14 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
   void complain(std::string level);
    Harl(/* args */);
    ~Harl();
};

#endif
