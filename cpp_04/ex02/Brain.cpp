#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor called in Brain" << std::endl;
}

Brain::Brain(Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Copy constructor called in Brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor called in Brain" << std::endl;
}

Brain &Brain::operator=(const Brain& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Copy assignment operator called in Brain" << std::endl;
    return *this;
}