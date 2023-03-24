#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <chrono>

#define k 5

class PmergeMe
{
private:
    /* data */
public:
    PmergeMe(/* args */);
    PmergeMe(PmergeMe const &copy);
	PmergeMe & operator=(const PmergeMe &other);
    ~PmergeMe();
};

std::string FullString(char **av);
int         GetLength(std::string full);
int         *Parse(std::string full);
bool        IsValidInput(std::string full);
void        print_vector(std::vector<int> &vi);
void        insertion_sort(std::vector<int> &vi);
void        merge_sort(std::vector<int> &left_vector, std::vector<int> &right_vector, std::vector<int> &vi);
void        merge_insert_sort_vector(std::vector<int>& vi);
void sort_vector(int *tab, int len);

# endif