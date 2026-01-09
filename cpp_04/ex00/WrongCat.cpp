#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Default consructeur called in WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat &other)
{
    (void)other;
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
    std::cout << "Copy assignment operator called in WrongCat" << std::endl;
    return *this;
}

void WrongCat::makeSound()
{
    std::cout << "Wrong cat sound" << std::endl;
}
