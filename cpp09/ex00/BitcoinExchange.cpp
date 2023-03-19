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
