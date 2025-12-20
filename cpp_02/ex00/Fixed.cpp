#include <iostream>
#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}

// Fixed::Fixed(int fixed_point): fixed_point(fixed_point)
// {
    
// }

Fixed::Fixed(Fixed& other) : fixed_point(other.fixed_point)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& other)
{
    if (this == &other)
        return *this;
    this->fixed_point = other.fixed_point;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    // return fixed_point * 2 ^ fraction;
    return fixed_point;
}

void Fixed::setRawBits(int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point = raw;
}

