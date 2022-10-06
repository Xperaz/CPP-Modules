/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:54:06 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/06 11:15:44 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <cstring>
#include <fstream>      // std::ifstream


class sed
{
private:
    std::string content;
public:
    std::string read_file(char *file);
    sed(/* args */);
    ~sed();
};


#endif
