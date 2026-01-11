#include "Animal.hpp"

Animal::Animal()
{
    std::cout  << "Default consructeur called in Animal" << std::endl;
}

Animal::Animal(std::string &type):type(type)
{
    std::cout  << "Default consructeur called in Animal with type" << this->type << std::endl;
}

Animal::Animal(Animal &other):type(other.type)
{
    std::cout << "Copy constructor called Animal" << std::endl;
}

Animal &Animal::operator=(const Animal& other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    std::cout << "Copy assignment operator called in Animal" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor called Animal" << std::endl;
}


std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "No sound yet" << std::endl;
}