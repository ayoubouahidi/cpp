#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructeur" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << " ScalarConverter Deconstructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    if (this == &other)
        return *this;
    *this = other;
    return *this;
}

static void ScalarConverter::convert(std::string& literal)
{
    
}