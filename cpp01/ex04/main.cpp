/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:53:43 by aouhadou          #+#    #+#             */
/*   Updated: 2022/10/06 13:51:17 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <string.h>


char    *get_name(char   *name)
{
    int i;

    i = 0;
    while (name[i] != '.')
        i++;
    char    *rep = new char[i];
    rep[i] = '\0';
    std::memcpy(rep, name, i);
    return(rep);
}

void find_and_replace(
    std::string& s,
    std::string const& toReplace,
    std::string const& replaceWith
) {
    std::string buf;
    std::size_t pos = 0;
    std::size_t prevPos;

    // Reserves rough estimate of final size of string.
    buf.reserve(s.size());

    while (true) {
        prevPos = pos;
        pos = s.find(toReplace, pos);
        if (pos == std::string::npos)
            break;
        buf.append(s, prevPos, pos - prevPos);
        buf += replaceWith;
        pos += toReplace.size();
    }

    buf.append(s, prevPos, s.size() - prevPos);
    s.swap(buf);
}

int is_file_exist(char *str)
{
    std::ifstream ifs(str);
    if (ifs.is_open())
        return(1);
    return (0);
}

int check_args(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[1] &&  !(is_file_exist(av[1])))
            return (0);
        if(!av[1][0] || !av[2][0] || !av[3][0])
           return (0);
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    std::string     content;
    std::string     line;
    std::ifstream   file;
    char            *rep_name;
    std::ofstream   replace_f;

    if (!check_args(ac, av))
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
    file.open(av[1]);
    while (!file.eof())
    {
        std::getline (file, line);
        content += line + '\n';
    }
    find_and_replace(content, av[2], av[3]);
    rep_name = get_name(av[1]);
    std::string str(rep_name);
    str += ".replace";
    replace_f.open(str);
    replace_f << content;
    file.close();
    replace_f.close();
    delete (rep_name);
    return (0);
}
