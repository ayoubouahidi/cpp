#include "Cat.hpp"

Cat::Cat():Animal()
{
    type = "Cat";
    std::cout << "Default consructeur called in Cat" << std::endl;
}

Cat::Cat(const Cat &other):Animal(other)
{
    std::cout << "Copy constructor called Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor called Cat" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    std::cout << "Copy assignment operator called in Cat" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Moew" << std::endl;
}
