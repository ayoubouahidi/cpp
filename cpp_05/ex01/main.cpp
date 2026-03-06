#include "Form.hpp"

int main()
{
    try
    {
        Form  form1("ayoub", 160, 50, true);
        std::cout << form1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}