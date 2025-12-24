#include <iostream>
#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}


Fixed::Fixed(const int fixed_point): fixed_point(fixed_point)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = fixed_point * (1 << fraction);
}


Fixed::Fixed(const float fixed_point): fixed_point(fixed_point)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(fixed_point * (1 << fraction));
}

int   Fixed::toInt( void ) const
{
    return  this->fixed_point >> fraction;
}


float Fixed::toFloat( void ) const
{
    return (float)this->fixed_point / (1 << fraction);
}

Fixed::Fixed(const Fixed& other) : fixed_point(other.fixed_point)
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




bool Fixed::operator>(const Fixed& other) const {
    return this->fixed_point > other.fixed_point;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->fixed_point < other.fixed_point;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->fixed_point >= other.fixed_point;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->fixed_point <= other.fixed_point;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->fixed_point == other.fixed_point;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->fixed_point != other.fixed_point;
}

Fixed& Fixed::operator++() {
    ++fixed_point;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed cp = *this;
    fixed_point++;
    return cp;
}

Fixed& Fixed::operator--() {
    --fixed_point;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed cp = *this;
    fixed_point--;
    return cp;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.fixed_point = this->fixed_point + other.fixed_point;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.fixed_point = this->fixed_point - other.fixed_point;
    return result;
}

Fixed Fixed::operator*(const Fixed& Other) const {
    Fixed res;
    res.fixed_point = (this->fixed_point * Other.fixed_point) >> fraction;
    return res;
}

Fixed Fixed::operator/(const Fixed& Other) const{
    Fixed res;
    res.fixed_point = (this->fixed_point << fraction) / Other.fixed_point;
    return res;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}

void Fixed::setRawBits(int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point = raw;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a < b)
        return a;
    else
        return b; 
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return a;
    else
        return b; 
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a > b)
        return a;
    else
        return b; 
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b)
        return a;
    else
        return b; 
}

