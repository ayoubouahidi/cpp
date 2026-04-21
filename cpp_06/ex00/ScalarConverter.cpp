#include "ScalarConverter.hpp"

#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <sstream>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    if (this != &other)
    {
    }
    return *this;
}

static bool parseLiteral(const std::string& literal, double& value)
{
    std::string parsed = literal;

    if (parsed.length() > 1 && parsed[parsed.length() - 1] == 'f')
        parsed.erase(parsed.length() - 1);

    char* end = 0;
    value = std::strtod(parsed.c_str(), &end);
    return end != parsed.c_str() && *end == '\0';
}

static std::string formatFixedOne(double value)
{
    std::ostringstream oss;

    oss << std::fixed << std::setprecision(1) << value;
    return oss.str();
}

static void printChar(double value)
{
    std::cout << "char: ";
    if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
    {
        std::cout << "impossible" << std::endl;
        return;
    }

    char c = static_cast<char>(value);
    if (std::isprint(static_cast<unsigned char>(c)))
        std::cout << "'" << c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

static void printInt(double value)
{
    std::cout << "int: ";
    if (std::isnan(value) || std::isinf(value)
        || value < std::numeric_limits<int>::min()
        || value > std::numeric_limits<int>::max())
    {
        std::cout << "impossible" << std::endl;
        return;
    }

    std::cout << static_cast<int>(value) << std::endl;
}

static void printFloat(double value)
{
    std::cout << "float: ";
    if (std::isnan(value))
    {
        std::cout << "nanf" << std::endl;
        return;
    }
    if (std::isinf(value))
    {
        std::cout << (value < 0 ? "-inff" : "inff") << std::endl;
        return;
    }

    std::cout << formatFixedOne(value) << "f" << std::endl;
}

static void printDouble(double value)
{
    std::cout << "double: ";
    if (std::isnan(value))
    {
        std::cout << "nan" << std::endl;
        return;
    }
    if (std::isinf(value))
    {
        std::cout << (value < 0 ? "-inf" : "inf") << std::endl;
        return;
    }

    std::cout << formatFixedOne(value) << std::endl;
}

void ScalarConverter::convert(std::string& literal)
{
    double value;

    if (literal.length() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0])))
    {
        value = static_cast<char>(literal[0]);
    }
    else if (!parseLiteral(literal, value))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}