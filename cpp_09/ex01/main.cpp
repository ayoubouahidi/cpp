#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: incorrect number of arguments" << std::endl;
        return 1; 
    }
    try
    {
        RPN rpn;
        rpn.tokinzer(av[1]);
        std::cout << rpn.getResult() << std::endl;  // affiche juste le résultat final
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}