#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <sstream>
#include <fstream>


class RPN {
    private:
        std::stack<int> stack;
    public:
        RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
        ~RPN();
        
        void tokinzer(std::string line);
        int getResult() const;
        
};



#endif