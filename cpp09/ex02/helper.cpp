#include "PmergeMe.hpp"

std::string FullString(char **av)
{
    int i = 1;
    std::string full;
    while (av[i])
    {
        std::string str(av[i]);
        full += str;
        full += " ";
        i++;
    }
    return (full);
}

int GetLength(std::string full)
{
    int count = 0;
    std::stringstream ss(full);
    std::string token;
    while (getline(ss, token, ' '))
        count++;
    return (count);
}

bool    IsValidInput(std::string full)
{
    int i = 0;
    while (full[i])
    {
        if (full[i] == ' ')
            i++;
        if (full[i] < '0' && full[i] > '9')
            return (false);
        i++;
    }
    i = 0;
    int flag1 = 0;
    int flag2 = 0;
    while (full[i])
    {
        if (full[i] == '\'')
        {
            if (flag1 == 0)
                flag1++;
            else
                flag1--;
        }
        if (full[i] == '"')
        {
            if (flag2 == 0)
                flag2++;
            else
                flag2--;
        }
        i++;
    }
    if (flag1 != 0 || flag2 != 0)
        return (false);
    return (true);
}

int *Parse(std::string full)
{
    if (!IsValidInput(full))
        return (NULL);
    int count = GetLength(full);
    int *tab = new int[count];
    std::stringstream ss(full);
    std::string token;
    int i = 0;
    while (getline(ss, token, ' '))
    {
        if (token[0] == '\0')
        {
            delete[] tab;
            return (NULL);
        }
        int val = atoi((char *)token.c_str());
        if (val < 0)
        {
            delete[] tab;
            return (NULL);
        }
        tab[i] = val;
        i++;
    }
    return (tab);
}