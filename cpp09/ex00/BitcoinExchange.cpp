#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
    std::cout << "the construnctor goes here!" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    (void)copy;
    std::cout << " copy constructor goes here!" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const &other)
{
    if (this != &other)
    {
        
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "the destructor goes here!" << std::endl;
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

bool  IsValidRate(char *str)
{
    int i = 0;
    int count = 0;
    int count2 = 0;
    while (str[i])
    {
        if (i > 0 && str[i] == '-')
            return (false);
        if (str[i] == ' ')
            return (false);
        if (str[i] == '.')
            count++;
        if (str[i] == ',')
            count2++;
        i++;
    }
    
    if (count > 1 || count2 > 1)
        return (false);
    i = 0;
    while (str[i])
    {
        if (str[i] == '.')
            i++;
        if (str[i] < '0' && str[i] > '9')
            return (false);
        i++;
    }
    
    return (true);
}

bool ValidMonthDay(int day, int mnt)
{
    if (mnt == 2 && day > 28)
        return (false);
    if (mnt % 2 == 0 && day > 30)
        return (false);
    return (true);
}

bool IsValidDay(char *token, std::string month)
{
    int len = 0;
    while (token[len])
        len++;
    if (!IsValidNumber(token))
        return (false);
    else if (len != 2)
        return (false);
    int val = atoi(token);
    if (val > 31 || val < 1)
        return (false);
    if (!ValidMonthDay(val, atoi((char *)month.c_str())))
        return (false);
    return (true);   
}

bool IsValidMonth(char *token)
{
    int len = 0;
    while (token[len])
        len++;
    if (!IsNumber(token))
        return (false);
    if (len != 2)
        return (false);
    int val = atoi(token);
    if (val > 12 || val < 1)
        return (false);
    return (true);   
}

bool IsValidYear(char *token)
{
    int len = 0;
    while (token[len])
        len++;
    if (!IsValidNumber(token))
        return (false);
    if (len != 4)
        return (false);
    int val = atoi(token);
    if (val > 2022 || val < 2009)
        return (false);
    return (true);   
}