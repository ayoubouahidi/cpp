#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac == 1)
            throw std::invalid_argument("Error: no numbers provided");


        PmergeMe mergeMe;
        mergeMe.check_args(av);

        std::cout << "before: ";
        for (size_t i = 0; i < mergeMe.vect.size(); i++)
            std::cout << mergeMe.vect[i] << " ";
        std::cout << std::endl; 


        clock_t startVec = clock();
        std::vector<int> sortedVec = mergeMe.FordJohnson(mergeMe.vect);
        clock_t endVec = clock();
        double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000;

        std::cout << "After: ";
        for (size_t i = 0; i < sortedVec.size(); i++)
            std::cout << sortedVec[i] << " ";
        std::cout << std::endl;


        clock_t startDeq = clock();
        std::deque<int> sortedDeq = mergeMe.FordJohnson(mergeMe.deque);
        clock_t endDeq = clock();
        double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;


        std::cout << "Time to process a range of " << sortedVec.size()
                   << " elements with std::vector : " << timeVec << " us" << std::endl;
        std::cout << "Time to process a range of " << sortedDeq.size()
                   << " elements with std::deque : " << timeDeq << " us" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}