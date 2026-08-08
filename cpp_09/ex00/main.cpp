#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "not 2 argument should be a file" << std::endl;
        return 1;
    }
    std::ifstream argFile(av[1]);
    if (!argFile.is_open())
    {
        std::cerr << "Error : Could not open the file" << std::endl;
        return 1;
    }
    

}