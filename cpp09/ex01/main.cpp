#include "RPN.hpp"

bool IsOperator(char c)
{
    if (c == '/' || c == '*' || c == '+' || c == '-')
        return (true);
    return (false);
}

bool IsValidInput(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (IsOperator(str[i]) || str[i] == ' ')
            i++;
        else if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}

bool CheckInput(int ac, char **av)
{
    if (ac < 2 || av[1][0] == '\0')
        return (false);
    else if (!IsValidInput(av[1]))
        return (false);
    return (true);
}

int main(int ac, char **av)
{
    if (!CheckInput(ac, av))
        return ( std::cout << "Error!" << std::endl, 0);
    std::string str(av[1]);
    std::stringstream ss(str);
    std::string token;
    while (getline(ss, token, ' ')) {
        std::stack<int> myStack;
    }
    
    return (0);
} 