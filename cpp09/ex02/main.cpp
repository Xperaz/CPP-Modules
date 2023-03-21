#include "PmergeMe.hpp"



int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "Error" << std::endl;
    std::string full = FullString(av);
    int len = GetLength(full);
    int *tab = Parse(full);
    if (tab == NULL)
    {
        std::cout << "Invalid input" << std::endl;
        return (0);
    }
    int i = 0;
    while (i < len)
        std::cout << tab[i++] << std::endl;
    return(0);
}