#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    ac = 0;
    (void)av;
    /*if (ac < 2 || av[1] == NULL)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }*/
    std::map<std::string, float> data;
    std::string mydata;
    
    std::ifstream Myreadfile("data.csv");
    int start = 0;
    while (getline(Myreadfile, mydata))
    {
        if (start == 0)
        {
            start++;
            continue;
        }
        const char *str = mydata.c_str();
        char *token = strtok((char *)str, ",");
        int tag = 0;
        char *date;
        char *value;
        while (token != NULL)
        {
            if (tag == 0)
                date = token;
            else if (tag == 1)
                value = token;
            tag++;
            token = strtok(NULL, "-");
        }
        std::string key(date);
        data[key] = atof(value);
        std::map<std::string, float>::iterator it;
        for (it = data.begin(); it != data.end(); it++)
        {
            std::cout << it->first << " " << it->second << std::endl;
        }
        

    }
}