#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}


PmergeMe::PmergeMe(const PmergeMe& other)
{
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if(this != &other)
    {
        this->vect = other.vect;
        this->deque = other.deque;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{

}

void PmergeMe::check_args(char **args)
{
    int i = 1;

    while (args[i])
    {
        std::string arg = args[i];
    
        if (arg.empty())
            throw std::invalid_argument("Error: empty argument");
        
        for (size_t j = 0; j < arg.length(); j++)
        {
            if (!std::isdigit(arg[j]))
                throw std::invalid_argument("Error: invalid argument");
        }
        
        int num = std::atol(arg.c_str());
        if (num > INT_MAX)
            throw std::invalid_argument("Error: number too large");
        i++;
        this->vect.push_back(num);
        this->deque.push_back(num);
    }

}

std::vector<int> PmergeMe::jacobsthalSequence(int n)
{
    std::vector<int> jac;
    jac.push_back(0);
    jac.push_back(1);
    while (jac.back() < n)
    {
        int next = jac[jac.size() - 1] + 2 * jac[jac.size() - 2];
        jac.push_back(next);
    }
    return jac;
}


std::vector<int> PmergeMe::FordJohnson(std::vector<int> input)
{
    bool hasStrgl = false;
    int Strgl;
    std::vector<std::pair<int, int>> pairs;


    for(size_t i = 0; i < input.size(); i+=2)
    {
        int a = input[i];
        int b = input[i + 1];
        if (a < b)
            pairs.push_back(std::make_pair(b , a));
        else
            pairs.push_back(std::make_pair(a , b));
    }
    if (input.size() %2 != 0)
    {
        hasStrgl = true;
        Strgl = input[input.size() - 1];
    }


    std::vector<int> main;
    std::vector<int> pend;

    // main_pend(&main, &pend);
    for(int i = 0; i + 1 < pairs.size(); i++)
    {
        main.push_back(pairs[i].first);
        // pend.push_back(pairs[i].second);
    }

    std::vector<int> sortedMain = FordJohnson(main);


    std::vector<std::pair<int, int> > sortedPairs;
    std::vector<bool> used(pairs.size(), false);
    for (size_t j = 0; j < sortedMain.size(); j++)
    {
        for (size_t k = 0; k < pairs.size(); k++)
        {
            if (!used[k] && pairs[k].first == sortedMain[j])
            {
                sortedPairs.push_back(pairs[k]);
                used[k] = true;
                break;
            }
        }
    }


    std::vector<int> main_1;
    std::vector<int> pend;

    if (!sortedPairs.empty())
        main_1.push_back(sortedPairs[0].second); // a1

    for (size_t j = 0; j < sortedPairs.size(); j++)
        main_1.push_back(sortedPairs[j].first);  // tous les b triés

    for (size_t j = 1; j < sortedPairs.size(); j++)
        pend.push_back(sortedPairs[j].second); // a2, a3, ...
    if (hasStrgl)
        pend.push_back(Strgl);




    if(main.size() == 2)
    {

        return main;
    }
    
}

