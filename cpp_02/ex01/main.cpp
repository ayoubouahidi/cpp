#include <iostream>
#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

int main( void ) 
{
    Fixed  const a(17.5f);
    Fixed   b( 10 );
    // Fixed c;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    
    std::cout << "a = " << a.toInt() << std::endl;  
    std::cout << "b = " << b << std::endl;

    return 0;
}