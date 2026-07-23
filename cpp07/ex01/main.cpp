#include "iter.hpp"

void add_one(int& i)
{
    i++;
}

void concatenate_war(std::string& el)
{
    el += "_war";
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    ::iter(arr, 5 , add_one);
    ::printArray(arr, 5);

    std::string arr_str[3] = {"ouahidi", "ayoub", "24ans"};
    ::iter(arr_str, 3, concatenate_war);
    ::printArray(arr_str, 3);

    
}