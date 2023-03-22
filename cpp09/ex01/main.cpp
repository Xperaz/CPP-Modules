#include "RPN.hpp"

bool IsOperator(char c)
{
    if (c == '/' || c == '*' || c == '+' || c == '-')
        return (true);
    return (false);
}

bool CheckInput(int ac, char **av)
{
    if (ac != 2 || av[1][0] == '\0')
        return (false);
    return (true);
}

double Multiplication(double a, double b){ return (a * b); }
double Adding(double a, double b){ return (a + b); }
double Substraction(double a, double b){ return (a - b); }
double Division(double a, double b){
    if (b == 0)
    {
        std::cout << "division by zero not allowed!!" << std::endl;
        exit(1);
    }
    return (a / b); 
    }

int main(int ac, char **av)
{
    if (!CheckInput(ac, av))
        return ( std::cout << "Error!" << std::endl, 0);
    std::stack<int> myStack;
    int i = 0;
    std::string str(av[1]);
    while (str[i]) {
        if (isdigit(str[i]))
        {
            int operand = str[i] - 48;
            myStack.push(operand);
            // std::cout << myStack.top() << std::endl;
        }
        else if (IsOperator(str[i]))
        { 
            if (myStack.size() < 2)
            {
                std::cout << "invalid form" << std::endl;
                return (1);
            }
            if (str[i] == '*')
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Multiplication(b, a);
                myStack.push(c);
            }

            if (str[i] == '/')
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Division(b, a);
                myStack.push(c);

            }

            if (str[i] == '+')
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Adding(b, a);
                myStack.push(c);

            }

            if (str[i] == '-')
            {
                double a, b, c;
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                c = Substraction(b, a);
                myStack.push(c);
            }
         }
         else if(str[i] != ' ')
         {
            std::cout << "argument is not Reverse Polish Notation" << std::endl;
            return (0);
         }
         i++;
    }
    if(myStack.size() != 1)
    {
        std::cout << "incomplet NPR " << std::endl;
        return (0);
    }
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    return (0);
} 