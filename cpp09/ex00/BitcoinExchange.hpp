#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <memory>
#include <algorithm>
#include <fstream>
#include <map>
#include <string.h>
#include<array>
#include <sstream>

class BitcoinExchange
{
    private:
        /* data */
    public:
        BitcoinExchange(/* args */);
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange & operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
};

bool IsNumber(char *str);
int CheckHiphen(char *str);
std::map<std::string, long double> GetMapData();
bool IsValidNumber(char *str);

#endif