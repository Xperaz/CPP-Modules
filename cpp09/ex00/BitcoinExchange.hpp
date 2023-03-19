#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <memory>
#include <algorithm>
#include <fstream>
#include <map>
#include <string.h>

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

#endif