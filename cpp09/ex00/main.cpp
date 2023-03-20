#include "BitcoinExchange.hpp"


bool IsValidDay(char *token)
{
    int len = 0;
    while (token[len])
        len++;
    if (!IsNumber(token))
        return (false);
    else if (len != 2)
        return (false);
    int val = atoi(token);
    if (val > 31 || val < 1)
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
    else if (len != 2)
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
    if (val > 2022 || val < 2000)
        return (false);
    return (true);   
}

int main(int ac, char **av)
{
    std::map<std::string, long double> data;
    data = GetMapData();
    if (ac < 2 || av[1][0] == '\0')
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    std::string input;
    std::ifstream Myreadfile(av[1]);
    int start = 0;
    int flag = 1;
    while (getline(Myreadfile, input))
    {
        if (start == 0)
        {
            start++;
            continue;
        }
        std::stringstream ss(input);
        std::string token;
        std::string date;
        double value;
        int count = 0;
        while (getline(ss, token, '|'))
        {
            if (count == 0)
            {
                // remove spaces
                token.erase(std::remove(token.begin(), token.end(), ' '), token.end());
                // temporary token
                std::string temp = token;
                // split date
                std::stringstream ss(temp);
                std::string tok;
                int count = 0;
                while (getline(ss, tok, '-'))
                {
                    if (count == 0)
                    {
                        if (!IsValidYear((char *)tok.c_str()))
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else if (count == 1)
                    {
                        if (!IsValidMonth((char *)tok.c_str()))
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else if (count == 2)
                    {
                        if (!IsValidDay((char *)tok.c_str()))
                        {
                            flag = 0;
                            break;
                        }
                    }
                    count++;
                }
                date = token;
            }
            else if (count == 1)
            {
                // remove spaces
                token.erase(std::remove(token.begin(), token.end(), ' '), token.end());
                // check if valid number
                if (!IsNumber((char *)token.c_str()))
                {
                    flag = 0;
                    break;
                }
                value = atof(token.c_str());
                if (value < 0)
                {
                    flag = -1;
                    std::cout << "Error: not a positive number." << std::endl;
                    break;
                }
                if (value > 1000)
                {
                    flag = -1;
                    std::cout << "Error: too large a number." << std::endl;
                    break;
                }

            }
            count++;
        }
        
        if (flag == 1)
        {
            std::map<std::string, long double>::iterator it;
            it = data.lower_bound(date);
            if (it->first != date)
                it--;
            std::cout <<  date << " => " << value << " = "  << value * it->second << std::endl;
        }
        else if (flag == 0)
            std::cout << "Error: bad input => " << input << std::endl;
        flag = 1;
    }
    return (0);
}


// check for more than 3 tokens