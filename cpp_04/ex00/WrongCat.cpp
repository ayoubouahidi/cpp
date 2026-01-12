#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
    type = "WrongCat";
    std::cout << "Default consructeur called in WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat &other):WrongAnimal(other)
{
    std::cout << "Copy constructor called WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    std::cout << "Copy assignment operator called in WrongCat" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat sound" << std::endl;
}
