#include <iostream>
#include <stdexcept>
#include "Test.h"

// CustomExeption::CustomExeption()
// {}

// const char* CustomExeption::what () const noexcept
// {
//     return "ERROR in custom exeption ";
// }


// int main()
// {
//     int x = 16;
//     int y = 0;
//     int choice;
//     try
//     {
//         // if (y == 0)
//         //    throw std::invalid_argument("division by zero not allowed ");
//         // int result = x / y;
//         // std::cout << result << std::endl;
//         std::cin >> choice;
//         if (choice == 1)
//             throw CustomExeption();
//         if (choice == 2)
//             throw std::invalid_argument("INVALID");
//         else
//             throw "UNKNOWN";
//     }
//     // catch(const std::invalid_argument &e)
//     // {
//     //     std::cout <<  "error :" << e.what() << std::endl;
//     // }
//     // catch (const std::out_of_range &e)
//     // {
//     //     std::cout << "error :" << e.what() << std::endl;
//     // }
//     // catch (...)
//     // {
//     //     std::cout << "UNKOWN ERROR" << std::endl;
//     // }
//     catch (std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
// }


// int main()
// {
    // char c = 'c';
    // int i = static_cast<int>(c);

    // std::cout << c << std::endl;
    // std::cout << i << std::endl;

    // const int n = 16;
    // const int *ptr = &n;
    // // int *noconstPoint = ptr;  // we will have a error 
    // int *noconstPnt = const_cast<int *>(ptr); // solution 
    // *noconstPnt = 17;
    // std::cout << *noconstPnt << std::endl;
    



// }


// int main()
// {
//     float f = 3.5;

//     // Implicit type case
//     // float to int
//     int a = f;
//     std::cout << "The Value of a: " << a << std::endl;

//     // using static_cast for float to int
//     int b = f;
//     std::cout << "\nThe Value of b: " << b << std::endl;
// }