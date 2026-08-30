#ifndef PMERGE_HPP
# define PMERGE_HPP


#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include <cctype>    
#include <climits>   
#include <cstdlib>   
#include <stdexcept> 

class PmergeMe
{
    private:
        // std::vector<int> vect;
        // std::deque<int> deque;
    public:
        std::vector<int> vect;
        std::deque<int> deque;
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();

        void check_args(char **args);
        std::vector<int> FordJohnson(std::vector<int> input);

        // int binarySearch(int a[], int item, int low, int high);
        // void insertionSort(int a[], int n);

        std::vector<int> jacobsthalSequence(int n);
        // void create_pairs();

};

#endif

