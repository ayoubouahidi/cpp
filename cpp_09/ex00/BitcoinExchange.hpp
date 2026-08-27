#ifndef BITCOIN_EXCHANGE
# define BITCOIN_EXCHANGE

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>


class BitcoinExchange{
    private:
        std::map<std::string, float> bitcoin_info;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange& operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        void loadDataSet(const std::string &path);
        bool check_valid_date(std::string &data);
        void procces_line(std::string &line);



};

#endif