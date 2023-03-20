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
        if (str[i] < '0' || str[i] >= '9')
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

std::map<std::string, long double> GetMapData()
{
    std::map<std::string, long double> data;
    std::string mydata;
    
    std::ifstream Myreadfile("data.csv");
    int start = 0;
    while (getline(Myreadfile, mydata))
    {
        if (start == 0)
        {
            start++;
            continue;
        }
        const char *str = mydata.c_str();
        char *token = strtok((char *)str, ",");
        int tag = 0;
        char *date;
        char *value;
        while (token != NULL)
        {
            if (tag == 0)
                date = token;
            else if (tag == 1)
                value = token;
            tag++;
            token = strtok(NULL, ",");
        }
        std::string key(date);
        data[key] = atof(value);
    }
    return (data);
}