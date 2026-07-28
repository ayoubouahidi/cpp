#include <Span.hpp>


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
    throw std::exception();
}


