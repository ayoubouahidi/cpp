#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout  << "Default consructeur called in WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string &type):type(type)
{
    std::cout  << "Default consructeur called in WrongAnimal with type" << this->type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other):type(other.type)
{
    std::cout << "Copy constructor called WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    std::cout << "Copy assignment operator called in WrongAnimal" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called WrongAnimal" << std::endl;
}


std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "No sound yet" << std::endl;
}