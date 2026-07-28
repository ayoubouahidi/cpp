#include "easyfind.hpp"

int main()
{
    try
    {
        
        std::vector<int> v1;
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(3);
        v1.push_back(4);
        int i = easyfind(v1, 2);
        std::cout << i << std::endl;

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}