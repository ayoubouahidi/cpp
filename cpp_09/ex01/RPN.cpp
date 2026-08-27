#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN& other)
{
    *this = other;
}

RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
        this->stack = other.stack;
    return *this;
}

RPN::~RPN()
{

}


void RPN::tokinzer(std::string line)
{
    std::stringstream ss(line);
    std::string token;
    while (ss >> token)
    {
        if (token[0] >= '0' && token[0] <= '9')
        {
            int number = std::atoi(token.c_str());
            stack.push(number);
        }else if (token[0] == '*' || token[0] == '+' || token[0] == '/' || token[0] == '-' )
        {
            std::stack<int>::size_type stackSize = stack.size();
            if (stackSize > 2)
            {
                std::cerr << "invalid format" <<  std::endl;
                return ;
            }
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();

            int result;
            switch (token[0])
            {
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '/':
                    if (b == 0)
                        throw std::runtime_error("division by zero");
                    result = a / b;
                    break;
                default:
                    throw std::runtime_error("invalid operator");
            }
            stack.push(result);
        }
        else{
            std::cerr << "ERROR : INVALID CHARECTER" << std::endl;
            return ;
        }
    }
}


int RPN::getResult() const
{
    if (stack.size() != 1)
        throw std::runtime_error("invalid expression");
    return stack.top();
}