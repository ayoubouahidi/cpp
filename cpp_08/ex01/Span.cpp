#include "Span.hpp"


Span::Span()
{

}

Span::Span(unsigned int n):N(n)
{

}

Span::~Span()
{

}

Span::Span(const Span& other):N(other.N), numbers(other.numbers)
{
    
}

Span& Span::operator=(const Span& other)
{
    if (this == &other)
        return *this;
    this->N = other.N;
    this->numbers = other.numbers;
    return *this;
}

void Span::addNumber(int n)
{
    if (this->numbers.size() != this->N)
        this->numbers.push_back(n);
    else
        throw std::exception();
}


int Span::longestSpan()
{
    if(this->numbers.size() < 2)
        throw std::exception();
    std::vector<int>::iterator  minElements = std::min_element(numbers.begin(), numbers.end());
    std::vector<int>::iterator  maxElements = std::max_element(numbers.begin(), numbers.end());

    return (*maxElements - * minElements);
}

int Span::shortestSpan()
{
    if (this->numbers.size() < 2)
        throw std::exception();
    std::vector<int> temp = this->numbers;
    std::sort(temp.begin(), temp.end());
    int minDiff = (temp[1] - temp[0]);
    for (size_t i = 0; i < this->numbers.size(); i++)
    {
        if (minDiff > (temp[i] - temp[i - 1]))
            minDiff = (temp[i] - temp[i - 1]);
    }
    return minDiff;
}

