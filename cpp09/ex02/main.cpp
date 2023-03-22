#include "PmergeMe.hpp"

int k = 5;

void print_vector(std::vector<int> vi)
{
    std::vector<int>::iterator it;
    std::cout << "vector: " ;
    for (it = vi.begin(); it != vi.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void insertion_sort(std::vector<int> &vi)
{
    for (size_t i = 0; i < vi.size(); i++)
    {
        int j = i;
        while (j > 0 && vi[j - 1] > vi[j])
        {
            int temp = vi[j - 1];
            vi[j - 1] = vi[j];
            vi[j] = temp;
            j = j - 1;
        }
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

void merge_insert_sort(std::vector<int>& vi)
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
        merge_insert_sort(left_vector);
        merge_insert_sort(right_vector);
        merge_sort(left_vector, right_vector, vi);
    }
    else
    {
        insertion_sort(vi);
    }
    
}

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
    std::vector<int> vi;
    for (int i = 0; i < len; i++)
        vi.push_back(tab[i]);
    merge_insert_sort(vi);
    print_vector(vi);
    return(0);
}