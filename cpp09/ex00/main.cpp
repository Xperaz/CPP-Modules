#include "BitcoinExchange.hpp"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		start;
// 	int		end;
// 	char	*res;
// 	int		i;

// 	if (s1 == NULL)
// 		return (NULL);
// 	if (set == NULL)
// 		return (ft_strdup(s1));
// 	start = 0;
// 	end = ft_strlen(s1);
// 	while (s1[start] && ft_strrchr(set, s1[start]))
// 		start++;
// 	while (end > start && ft_strrchr(set, s1[end - 1]))
// 		end--;
// 	res = (char *)malloc(sizeof(char) * (end - start + 1));
// 	if (!res)
// 		return (NULL);
// 	i = 0;
// 	while (start < end)
// 		res[i++] = s1[start++];
// 	res[i] = '\0';
// 	return (res);
// }

std::map<std::string, long double> GetMapData()
{
    std::map<std::string, long double> data;
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
            token = strtok(NULL, ",");
        }
        std::string key(date);
        data[key] = atof(value);
    }
    return (data);
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
    while (getline(Myreadfile, input))
    {
        if (start == 0)
        {
            start++;
            continue;
        }
        if (input.find("|") == std::string::npos)
        {
            std::cout << "Error: bad input => " << input << std::endl;
            continue; 
        }
        const char *str = input.c_str();
        char *token = strtok((char *)str, " |");
        char *date;
        long double value;
        int tag = 0;
        int flag = 1;
        while (token != NULL)
        {
            if (tag == 1)
            {
                value =  atof(token);
                if (value < 0 || value > 1000)
                {
                    if (value < 0)
                        std::cout << "Error: not a positive number." << std::endl;
                    else if (value > 1000)
                        std::cout << "Error: too large a number." << std::endl;
                    flag = 0;
                }
            }
            else if (tag == 0)
                date = token;
            tag++;
            token = strtok(NULL, "|");
        }
        if (flag)
        {
            std::map<std::string, long double>::iterator it;
            it = data.lower_bound(date);
            if (it->first != date)
                it--;
            std::cout <<  date << " => " << value << " = "  << value * it->second << std::endl;
        }
    }
}