#include <iostream>
#include "Fixed.hpp"

// int Fixed::fraction = 0;

Fixed::Fixed(int fixed_point): fixed_point(fixed_point)
{  
    this->fixed_point = 0;
}

Fixed::Fixed(Fixed& other) : fixed_point(other.fixed_point)
{

}

Fixed& Fixed::operator= (const Fixed& other)
{
    if (this == &other)
        return *this;
    this->fixed_point = other.fixed_point;
    return *this;
}