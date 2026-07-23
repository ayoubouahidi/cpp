#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

template <typename T> class Array
{
    private:
        T *arr;
        unsigned int n;

    public:

        Array()
        {
            arr = new T[0];
            this->n = 0;
        }

        Array(unsigned int n)
        {
            arr = new T[n]();
            this->n = n;
        }

        Array(const Array& other)
        {
            this->arr = new T[other.n];
            for (unsigned int i = 0; i < other.n; i++)
            {
                this->arr[i] = other.arr[i];
            }
            this->n = other.n;
            
        }

        Array& operator=(const Array& other)
        {
            if (this == &other)
                return *this;
            delete[] arr;
            this->arr = new T[other.n];
            for (unsigned int i = 0; i < other.n; i++)
            {
                this->arr[i] = other.arr[i];
            }
            this->n = other.n;
            return *this;
        }

        T& operator[](unsigned int index)
        {
            if (index >= this->n)
                throw std::exception();
            else
                return this->arr[index];
        }

        int size()
        {
            return n;
        }

        ~Array()
        {
            delete[] this->arr;
        }

};


#endif