#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
#include <sstream>
#include <vector>

class PmergeMe
{
private:
    /* data */
public:
    PmergeMe(/* args */);
    ~PmergeMe();
};

std::string FullString(char **av);
int         GetLength(std::string full);
int         *Parse(std::string full);
bool        IsValidInput(std::string full);

# endif