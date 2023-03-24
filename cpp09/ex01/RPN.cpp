#include "RPN.hpp"

RPN::RPN(/* args */)
{
    std::cout << "the construnctor goes here!" << std::endl;
}

RPN::RPN(const RPN &copy)
{
    (void)copy;
    std::cout << " copy constructor goes here!" << std::endl;
}

RPN& RPN::operator=(RPN const &other)
{
    if (this != &other)
    {
        
    }
    return (*this);
}

RPN::~RPN()
{
    std::cout << "the destructor goes here!" << std::endl;
}



