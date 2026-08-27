#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        this->bitcoin_info = other.bitcoin_info;
    }
    return *this;
}


BitcoinExchange::~BitcoinExchange()
{

}


void BitcoinExchange::loadDataSet(const std::string &path)
{
    std::ifstream file(path.c_str());
    if (!file.is_open())
        throw std::runtime_error ("Error : cannot open the file");
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        if (line.empty())
            continue;
        size_t com = line.find(",");
        std::string data = line.substr(0, com);
        float info = std::atof(line.substr(com + 1).c_str());
        bitcoin_info[data] = info;
    }
}

bool BitcoinExchange::check_valid_date(std::string &date)
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    for (size_t i = 0; date.size() > i; ++i)
        if(i != 4 && i != 7 && !isdigit(date[i]))
            return false;

    int year  = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day   = std::atoi(date.substr(8, 2).c_str());

    if (month < 1 || month > 12 || day < 1)
        return false;

    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    
    if (month == 2 && leap && day > 29)
        return false;

    if (day > daysInMonth[month - 1])
        return false;

    return true;
}

std::string trim(const std::string &str)
{
    const std::string whitespace = " \t\n\r\v\f";

    size_t start = str.find_first_not_of(whitespace);
    if (start == std::string::npos)
        return "";

    size_t end = str.find_last_not_of(whitespace);
    return str.substr(start, end - start + 1);
}

void BitcoinExchange::procces_line(std::string &line)
{
    size_t sep = line.find('|');
    if (sep == std::string::npos)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }
    std::string date = trim(line.substr(0, sep));
    std::string bitcoin = trim(line.substr(sep + 1));

    if (!this->check_valid_date(date))
    {
        std::cerr << "ERROR : INVALID DATE " << std::endl;
        return ;
    }

    char *end;
    double value = std::strtod(bitcoin.c_str(), &end);
    if (*end != '\0' || bitcoin.empty())
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }
    if(value < 0 )
    {
        std::cout << "Error: not a positive number." << std::endl;
        return;
    }
    if (value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return;
    }

    std::map<std::string, float>::iterator it = bitcoin_info.lower_bound(date);
    if (it == bitcoin_info.end() || it->first != date )
    {
        if (it  == bitcoin_info.begin())
        {
            std::cout << "bad input " << std::endl;
            return ;
        }
        it--;
    }
    std::cout << date << " => " << bitcoin << " = " << it->second * value << std::endl;

}


