#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    std::string nameT = "test1";
    try
    {
        std::cout << "test done" << std::endl;
        Bureaucrat test1("ouahidi", 150);
        std::cout << test1.getName() << std::endl;
        // Bureaucrat test2("ayoub", -1);
        // std::cout << test2.getName() << std::endl;
        
        Bureaucrat test3("ayoubouahidi", 140);
        test3.increment();
        std::cout << test3.getGrade() << std::endl;
        // test1.increment();  // execption 
        Bureaucrat test4("test 4", 1);
        // test4.decrement();
        // std::cout << test4.getGrade() << std::endl;
        std::cout << test1 << std::endl;

    }catch( std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}