#include "PmergeMe.hpp"
// #include <vector>

// #include <iostream>
// std::vector<int> jacobsthalSequence(int n)
// {
//     std::vector<int> jac;
//     jac.push_back(0);
//     jac.push_back(1);
//     while (jac.back() < n)
//     {
//         int next = jac[jac.size() - 1] + 2 * jac[jac.size() - 2];
//         jac.push_back(next);
//     }
//     return jac;
// }

// std::vector<size_t> buildInsertionOrder(size_t pendSize)
// {
//     std::vector<int> raw = jacobsthalSequence(pendSize + 1);

//     // std::cout << "raw :" ;
//     // for (size_t i =0; i < raw.size();i++)
//     //     std::cout << raw[i] << " ";
//     // std::cout << std::endl;

//     std::vector<bool> is_jachobstal(raw.back() + 1, false);
//     std::vector<size_t> order;

//     for (size_t i = 0; i < raw.size(); i++)
//         is_jachobstal[raw[i]] = true;

//     for (size_t i = 3; i < raw.size(); i++)
//     {
//         size_t start = raw[i] - 1;

//         while (!is_jachobstal[start])
//         {
//             if (start >= 1 && start <= pendSize)
//                 order.push_back(start - 1);  
//             start--;
//             // std::cout <<"start = " << start << " ," ;
//         }
//         if (start >= 1 && start <= pendSize)
//             order.push_back(start - 1);      
//     }

//     std::cout << "order :" ;
//     for (size_t i =0; i < order.size();i++)
//         std::cout << order[i];
//     std::cout << std::endl;
//     return order;
// }


// int main ()
// {
//     std::vector<size_t> p = buildInsertionOrder(1);
//     std::cout << "order :";
//     for(size_t i = 0;i < p.size(); i++)
//         std::cout << p[i] << " ";
//     std::cout << std::endl;
// }

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
        std::vector<int> sortedVec ;
        sortedVec = mergeMe.FordJohnson(mergeMe.vect);
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