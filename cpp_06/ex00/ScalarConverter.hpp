#ifndef SCALAR_HPP
# define SCALAR_HPP


#include <iostream>

class ScalarConverter
{
    private:

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ~ScalarConverter();
        ScalarConverter& operator=(const ScalarConverter& other);
        static void convert(std::string& literal);
};


#endif