#include "PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::~PmergeMe()
{
}

void print_vector(std::vector<int> &vi)
{
    std::vector<int>::iterator it;
    for (it = vi.begin(); it != vi.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void insertion_sort(std::vector<int> &vi)
{
    for (size_t i = 1; i < vi.size(); i++) {
        int key = vi[i];
        int j = i - 1;
        while (j >= 0 && vi[j] > key) {
            vi[j + 1] = vi[j];
            j--;
        }
        vi[j + 1] = key;
    }
}

void    merge_sort(std::vector<int> &left_vector, std::vector<int> &right_vector, std::vector<int> &vi)
{
    int left_size = vi.size() / 2;
    int rigth_size = vi.size() - left_size;
    int i = 0, l = 0, r = 0;

    while (l < left_size && r < rigth_size)
    {
        if (left_vector[l] < right_vector[r])
        {
            vi[i] = left_vector[l];
            i++;
            l++;
        }
        else
        {
            vi[i] = right_vector[r];
            i++;
            r++;
        }
    }
    while (l < left_size)
    {
        vi[i] = left_vector[l];
        i++;
        l++;
    }
    while (r < rigth_size)
    {
        vi[i] = right_vector[r];
        i++;
        r++;
    }
}

void merge_insert_sort_vector(std::vector<int>& vi)
{
    int len = vi.size();
    if (len > k)
    {
        if (len <= 1) return;

        int middle = len / 2;
        std::vector<int> left_vector;
        std::vector<int> right_vector;

        std::vector<int>::iterator it;
        int i = 0;
        for (it = vi.begin(); it != vi.end(); ++it)
        {
            if (i < middle)
                left_vector.push_back(*it);
            else
                right_vector.push_back(*it);
            i++;
        }
        merge_insert_sort_vector(left_vector);
        merge_insert_sort_vector(right_vector);
        merge_sort(left_vector, right_vector, vi);
    }
    else
    {
        insertion_sort(vi);
    }
    
}

void sort_vector(int *tab, int len)
{
    std::vector<int> vi;
    for (int i = 0; i < len; i++)
        vi.push_back(tab[i]);
    std::cout << "vector befor:    ";
    print_vector(vi);
    clock_t start_time = clock();
    merge_insert_sort_vector(vi);
    clock_t end_time = clock(); // Step 5
    double execution_time = double(end_time - start_time); 
    std::cout << "vector after:    ";
    print_vector(vi);
    std::cout << "vector execution time: " << execution_time / 1000 << " us." << std::endl;
}