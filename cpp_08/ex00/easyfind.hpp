#ifndef EASY_HPP
# define EASY_HPP

#include <iostream>
#include <vector>

template <typename T>

T easyfind(std::vector<T> v, int n)
{
    for (typename std::vector<T>::iterator it = v.begin(); it != v.end(); ++it)
    {
        if (*it == n)
            return *it;
    }
    throw std::exception();
}

#endif