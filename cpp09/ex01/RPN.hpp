#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <ctype.h>
#include <sstream>
#include <stack>

class RPN
{
private:
    /* data */
public:
    RPN(/* args */);
    RPN(RPN const &copy);
	RPN & operator=(const RPN &other);
    ~RPN();
};



#endif