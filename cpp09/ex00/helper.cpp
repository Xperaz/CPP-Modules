#include "BitcoinExchange.hpp"

bool IsNumber(char *str)
{
    double val = atof(str);
    if (val == 0.0 && (str[0] != '0'))
        return (false);
    return (true);
}

bool IsValidNumber(char *str)
{
    int i =0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}

int CheckHiphen(char *str)
{
    int count = 0;
    int i = 0;
    while (str[i])
    {
        if (str[i] == '-')
            count++;
        i++;
    }
    return ((count != 2) ? 0 : 1);
}
