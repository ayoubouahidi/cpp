#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>


template <typename T>
void iter(T *arr,const  int size, void (*f)(T&))
{
    for (int i = 0; i < size; i++)
    {
        f(arr[i]);
    }
}

template <typename T>
void printArray(T *arr,  int size)
{
    for (int i = 0 ; i < size; i++)
    {
        std::cout  << arr[i] << std::endl;
    }
}

#endif