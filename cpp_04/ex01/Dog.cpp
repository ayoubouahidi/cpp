#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Default consructeur called in Dog" << std::endl;
}

Dog::Dog(Dog &other)
{
    (void)other;
    std::cout << "Copy constructor called Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called Dog" << std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
    if (this == &other)
        return *this;
    std::cout << "Copy assignment operator called in Dog" << std::endl;
    return *this;
}


void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}


