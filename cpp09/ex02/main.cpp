#include "PmergeMe.hpp"

void print_deque(std::deque<int> myDeque)
{
    std::deque<int>::iterator it;
    for (it = myDeque.begin(); it != myDeque.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void insertion_sort_dq(std::deque<int> &dq)
{
    for (size_t i = 1; i < dq.size(); i++) {
        int key = dq[i];
        int j = i - 1;
        while (j >= 0 && dq[j] > key) {
            dq[j + 1] = dq[j];
            j--;
        }
        dq[j + 1] = key;
    }
}

void    merge_sort(std::deque<int> &left_deque, std::deque<int> &right_deque, std::deque<int> &dq)
{
    int left_size = dq.size() / 2;
    int rigth_size = dq.size() - left_size;
    int i = 0, l = 0, r = 0;

    while (l < left_size && r < rigth_size)
    {
        if (left_deque[l] < right_deque[r])
        {
            dq[i] = left_deque[l];
            i++;
            l++;
        }
        else
        {
            dq[i] = right_deque[r];
            i++;
            r++;
        }
    }
    while (l < left_size)
    {
        dq[i] = left_deque[l];
        i++;
        l++;
    }
    while (r < rigth_size)
    {
        dq[i] = right_deque[r];
        i++;
        r++;
    }
}

void merge_insert_sort_deque(std::deque<int>& dq)
{
    int len = dq.size();
    if (len > k)
    {
        if (len <= 1) return;

        int middle = len / 2;
        std::deque<int> left_deque;
        std::deque<int> right_deque;

        std::deque<int>::iterator it;
        int i = 0;
        for (it = dq.begin(); it != dq.end(); ++it)
        {
            if (i < middle)
                left_deque.push_back(*it);
            else
                right_deque.push_back(*it);
            i++;
        }
        merge_insert_sort_deque(left_deque);
        merge_insert_sort_deque(right_deque);
        merge_sort(left_deque, right_deque, dq);
    }
    else
    {
        insertion_sort_dq(dq);
    }
    
}

void sort_deque(int *tab, int len)
{
    std::deque<int> pmerge;
    for (int i = 0; i < len; i++)
        pmerge.push_back(tab[i]);
    std::cout << "deque befor:    ";
    print_deque(pmerge);
    clock_t start_time = clock();
    merge_insert_sort_deque(pmerge);
    clock_t end_time = clock();
    double execution_time = double(end_time - start_time); 
    std::cout << "deque after:    ";
    print_deque(pmerge);
     std::cout << "deque execution time: " << execution_time / 1000 << " us." << std::endl;
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
    std::string full = FullString(av);
    int len = GetLength(full);
    int *tab = Parse(full);
    if (tab == NULL)
    {
        std::cout << "Invalid input" << std::endl;
        return (delete[] tab, 0);
    }
    std::cout << "/*----------------- Vector -------------------" << std::endl;
    sort_vector(tab, len);
    std::cout << "/*----------------- Deque -------------------" << std::endl;
    sort_deque(tab, len);
    delete[] tab;
    return(0);
}