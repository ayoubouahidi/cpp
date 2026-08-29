#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac == 1)
            throw std::invalid_argument("Error: no numbers provided");
        PmergeMe mergeMe;
        mergeMe.check_args(av);
        // check BUGs
        for (size_t i = 0; i < mergeMe.vect.size(); i++)
            std::cout << mergeMe.vect[i] << std::endl;
        
        mergeMe.FordJohnson();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}