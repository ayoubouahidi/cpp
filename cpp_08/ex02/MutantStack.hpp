#ifndef MUTANTSTACK
# define MUTANTSTACK

#include <iostream>
#include <stack>



template <typename T>

class MutantStack : std::stack<T> 
{
    public:
        MutantStack()
        {}
        // MutantStack(const MutantStack& other);
        // MutantStack& operator=(const MutantStack& other);
        ~MutantStack()
        {}

        typedef typename std::stack<T>::container_type container_type;
        typedef typename container_type::iterator iterator;
        typedef typename container_type::const_iterator const_iterator;

        iterator begin() {return this->c.begin();}
        const_iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
        const_iterator end() {return this->c.end();}
};

#endif