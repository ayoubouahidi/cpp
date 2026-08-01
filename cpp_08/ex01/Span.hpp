#ifndef SPAN_HPP
# define SPAN_HPP


#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <ctime>

class Span{
    private:
        unsigned int N;
        std::vector<int> numbers;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};


#endif