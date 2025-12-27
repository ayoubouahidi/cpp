#include <iostream>

#include "m.hpp"


int main( void ) 
{
    int q = 45;

    const int &ref = (6546546); 
    A a;
    a.a = 5;
    std::cout << a.add(5, 5) << std::endl;
}