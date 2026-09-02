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

std::vector<int> jacobsthalSequence(int n)
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

size_t boundedBinaryInsert(std::vector<int>& main, int value, size_t bound)
{
    std::vector<int>::iterator begin = main.begin();
    std::vector<int>::iterator end = main.begin() + bound;

    std::vector<int>::iterator pos = std::lower_bound(begin, end, value);
    size_t index = pos - main.begin();
    main.insert(pos, value);
    return index;
}

std::vector<size_t> buildInsertionOrder(size_t pendSize)
{
    std::vector<int> raw = jacobsthalSequence(pendSize + 1);

    // std::cout << "raw :" ;
    // for (size_t i =0; i < raw.size();i++)
    //     std::cout << raw[i] << " ";
    // std::cout << std::endl;

    std::vector<bool> is_jachobstal(raw.back() + 1, false);
    std::vector<size_t> order;

    for (size_t i = 0; i < raw.size(); i++)
        is_jachobstal[raw[i]] = true;

    for (size_t i = 3; i < raw.size(); i++)
    {
        size_t start = raw[i] - 1;

        while (!is_jachobstal[start])
        {
            if (start >= 1 && start <= pendSize)
                order.push_back(start - 1);  
            start--;
            // std::cout <<"start = " << start << " ," ;
        }
        if (start >= 1 && start <= pendSize)
            order.push_back(start - 1);      
    }
    return order;
}

std::vector<int> PmergeMe::FordJohnson(std::vector<int> input)
{
    bool hasStrgl = false;
    int Strgl;
    std::vector<std::pair<int, int> > pairs;


    if (input.size() <= 1)
        return input;

    for(size_t i = 0; i + 1< input.size(); i+=2)
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
    

    for(size_t i = 0; i < pairs.size(); i++)
    {
        main.push_back(pairs[i].first);
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

    if (!sortedPairs.empty())
        main_1.push_back(sortedPairs[0].second); 

    for (size_t j = 0; j < sortedPairs.size(); j++)
        main_1.push_back(sortedPairs[j].first); 

    std::vector<size_t> bIndex(sortedPairs.size());
    for (size_t j = 0; j < sortedPairs.size(); j++)
        bIndex[j] = j + 1;   

    for (size_t j = 1; j < sortedPairs.size(); j++)
        pend.push_back(sortedPairs[j].second);

    if (hasStrgl)
        pend.push_back(Strgl);
    

    std::vector<size_t> insertionOrder = buildInsertionOrder(pend.size());

    for (size_t idx = 0; idx < insertionOrder.size(); idx++)
    {
        size_t pendIdx = insertionOrder[idx];
        int value = pend[pendIdx];

        size_t bound;
        if (hasStrgl && pendIdx == pend.size() - 1)
            bound = main_1.size();
        else
            bound = bIndex[pendIdx + 1];
        size_t insertedPos = boundedBinaryInsert(main_1, value, bound);

        for (size_t j = 0; j < bIndex.size(); j++)
        {
            if (bIndex[j] >= insertedPos)
                bIndex[j]++;
        }


    }

    return main_1;
}





std::deque<int> jacobsthalSequence_d(int n)
{
    std::deque<int> jac;
    jac.push_back(0);
    jac.push_back(1);
    while (jac.back() < n)
    {
        int next = jac[jac.size() - 1] + 2 * jac[jac.size() - 2];
        jac.push_back(next);
    }
    return jac;
}

size_t boundedBinaryInsert_d(std::deque<int>& main, int value, size_t bound)
{
    std::deque<int>::iterator begin = main.begin();
    std::deque<int>::iterator end = main.begin() + bound;

    std::deque<int>::iterator pos = std::lower_bound(begin, end, value);
    size_t index = pos - main.begin();
    main.insert(pos, value);
    return index;
}

std::deque<size_t> buildInsertionOrder_d(size_t pendSize)
{
    std::deque<int> raw = jacobsthalSequence_d(pendSize + 1);

    // std::cout << "raw :" ;
    // for (size_t i =0; i < raw.size();i++)
    //     std::cout << raw[i] << " ";
    // std::cout << std::endl;

    std::deque<bool> is_jachobstal(raw.back() + 1, false);
    std::deque<size_t> order;

    for (size_t i = 0; i < raw.size(); i++)
        is_jachobstal[raw[i]] = true;

    for (size_t i = 3; i < raw.size(); i++)
    {
        size_t start = raw[i] - 1;

        while (!is_jachobstal[start])
        {
            if (start >= 1 && start <= pendSize)
                order.push_back(start - 1);  
            start--;
        }
        if (start >= 1 && start <= pendSize)
            order.push_back(start - 1);      
    }
    // std::cout << "order :" ;
    // for (size_t i =0; i < order.size();i++)
    //     std::cout << order[i];
    // std::cout << std::endl;

    return order;
}

std::deque<int> PmergeMe::FordJohnson(std::deque<int> input)
{
    bool hasStrgl = false;
    int Strgl;
    std::deque<std::pair<int, int> > pairs;


    if (input.size() <= 1)
        return input;

    for(size_t i = 0; i + 1< input.size(); i+=2)
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


    std::deque<int> main;
    std::deque<int> pend;
    
    // main_pend(&main, &pend);
    for(size_t i = 0; i < pairs.size(); i++)
    {
        main.push_back(pairs[i].first);
        // pend.push_back(pairs[i].second);
    }

    std::deque<int> sortedMain = FordJohnson(main);


    std::deque<std::pair<int, int> > sortedPairs;
    std::deque<bool> used(pairs.size(), false);

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


    std::deque<int> main_1;

    if (!sortedPairs.empty())
        main_1.push_back(sortedPairs[0].second); 

    for (size_t j = 0; j < sortedPairs.size(); j++)
        main_1.push_back(sortedPairs[j].first); 

    

    std::deque<size_t> bIndex(sortedPairs.size());
    for (size_t j = 0; j < sortedPairs.size(); j++)
        bIndex[j] = j + 1;   // main_1[j+1] = sortedPairs[j].first

    for (size_t j = 1; j < sortedPairs.size(); j++)
        pend.push_back(sortedPairs[j].second);

    if (hasStrgl)
        pend.push_back(Strgl);

    std::deque<size_t> insertionOrder = buildInsertionOrder_d(pend.size());

    for (size_t idx = 0; idx < insertionOrder.size(); idx++)
    {
        size_t pendIdx = insertionOrder[idx];
        int value = pend[pendIdx];

        size_t bound;
        if (hasStrgl && pendIdx == pend.size() - 1)
            bound = main_1.size();
        else
            bound = bIndex[pendIdx + 1]; // O(1) au lieu de O(n) !

        size_t insertedPos = boundedBinaryInsert_d(main_1, value, bound);

        for (size_t j = 0; j < bIndex.size(); j++)
        {
            if (bIndex[j] >= insertedPos)
                bIndex[j]++;
        }
    }

    return main_1;


}

