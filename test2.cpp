#include <iostream>
#include <stdexcept>
#include "Test.h"

CustomExeption::CustomExeption()
{}

const char* CustomExeption::what () const noexcept
{
    return "ERROR in custom exeption ";
}


int main()
{
    int x = 16;
    int y = 0;
    int choice;
    try
    {
        // if (y == 0)
        //    throw std::invalid_argument("division by zero not allowed ");
        // int result = x / y;
        // std::cout << result << std::endl;
        std::cin >> choice;
        if (choice == 1)
            throw CustomExeption();
        if (choice == 2)
            throw std::invalid_argument("INVALID");
        else
            throw "UNKNOWN";
    }
    // catch(const std::invalid_argument &e)
    // {
    //     std::cout <<  "error :" << e.what() << std::endl;
    // }
    // catch (const std::out_of_range &e)
    // {
    //     std::cout << "error :" << e.what() << std::endl;
    // }
    // catch (...)
    // {
    //     std::cout << "UNKOWN ERROR" << std::endl;
    // }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}