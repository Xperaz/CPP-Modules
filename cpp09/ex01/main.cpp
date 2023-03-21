#include "RPN.hpp"

bool IsStrOperator(std::string str)
{
    if (str == "/" || str == "*" || str == "+" || str == "-")
        return (true);
    return (false);
}

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

double Multiplication(double a, double b){ return (a * b); }
double Adding(double a, double b){ return (a + b); }
double Substraction(double a, double b){ return (a - b); }
double Division(double a, double b){ return (a / b); }

int main(int ac, char **av)
{
    if (!CheckInput(ac, av))
        return ( std::cout << "Error!" << std::endl, 0);
    std::string str(av[1]);
    std::stringstream ss(str);
    std::string token;
    std::stack<int> myStack;
    while (getline(ss, token, ' ')) {
        if (!IsStrOperator(token))
            myStack.push(atoi((char *)token.c_str()));
        else if (IsStrOperator(token) && myStack.size() > 1)
        {
            if (token == "*")
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Multiplication(b, a);
                myStack.push(c);
                continue;
            }

            if (token == "/")
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Division(b, a);
                myStack.push(c);
                continue;
            }

            if (token == "+")
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Adding(b, a);
                myStack.push(c);
                continue;
            }

            if (token == "-")
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Substraction(b, a);
                myStack.push(c);
                continue;
            }
         }
         else
         {
            std::cout << "argument is not Reverse Polish Notation" << std::endl;
            return (0);
         }
    }
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    return (0);
} 