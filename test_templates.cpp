#include <iostream>
#include "test_templates.hpp"

// function template
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y; 
}

// int main()
// {
//     std::cout << "the max of 10 and 100 is " << myMax(10, 100) << std::endl;
//     std::cout << "the max of a and A is " << myMax('a', 'A') << std::endl;
// }

template <typename T>
Box<T>::Box(T val1, T val2):x(val1), y(val2)
{

}

template <typename T>
void Box<T>::getValue()
{
    std::cout << this->x << " " <<  this->y << std::endl; 
}



int main()
{
    Box<int> b(100, 100);
    b.getValue();

    Box<std::string> str("ouahidi", "ayoub");
    str.getValue();

}


// variable template
// template <typename T> constexpr T pi = T(3.14159);

// int main(){
//     std::cout << "Pi as float: " << pi<float> << std::endl;
//     std::cout << "Pi as double: " << pi<double>;
//     return 0;
// }