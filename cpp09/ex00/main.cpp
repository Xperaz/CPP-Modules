#include "BitcoinExchange.hpp"

bool parse_date(std::string token)
{
    std::string date;
    int cnt = 0;

    size_t first_non_space = token.find_first_not_of(" ");
    token = token.substr(first_non_space);
    size_t last_non_space = token.find_last_not_of(" ");
    token = token.substr(0, last_non_space + 1);

    std::string temp = token;
    std::stringstream ss(temp);
    std::string tok;
    int count = 0;
    std::string month;
    while (getline(ss, tok, '-'))
    {
        cnt++;
        if (cnt > 3)
            return (false);
        if (count == 0)
        {
            if (!IsValidYear((char *)tok.c_str()))
                return (false);
        }
        else if (count == 1)
        {
            month = tok;
            
            if (!IsValidMonth((char *)tok.c_str()))
                return (false);
        }
        else if (count == 2)
        {
            if (!IsValidDay((char *)tok.c_str(), month))
                return (false);
        }
        count++;
    }
    return (true);
}

double parse_rate(std::string token)
{
    double value;
    std::string str_value;
    // Remove spaces from the beginning of the string
    size_t first_non_space = token.find_first_not_of(" ");
    token = token.substr(first_non_space);

    // Remove spaces from the end of the string
    size_t last_non_space = token.find_last_not_of(" ");
    token = token.substr(0, last_non_space + 1);
    str_value = token;
    value = atof(token.c_str());
    if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (-1);
    }
    if (value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (-1);
    }
    if (!IsValidRate((char *)str_value.c_str()))
        return (-2);
    return (value);
}

int single_pipe(std::string token)
{
    for (size_t i = 0; i < token.length(); i++)
    {
        if (token[i] != '|' && token[i] != ' ')
            return false;
    }
    return(true);
}

int main(int ac, char **av)
{
    std::map<std::string, long double> data;
    if (ac != 2 || av[1][0] == '\0')
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    data = GetMapData();
    std::string input;
    std::ifstream Myreadfile(av[1]);
    int start = 0;
    int flag = 1;
    while (getline(Myreadfile, input))
    {
        if ((start == 0 && input == "date | value") || input.empty())
        {
            start++;
            continue;
        }
        if (single_pipe(input))
        {
            std::cout << "Error: bad input => " << input << std::endl;
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
                if (!parse_date(token))
                    flag = 0;
                date = token;
            }
            else if (count == 1)
            {
                value = parse_rate(token);
                if (value == -2)
                    flag = 0;
                else if (value == -1)
                    flag = -1;
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
