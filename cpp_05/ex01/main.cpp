#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {

        // Form  form1("form1", 120, 50);
        // std::cout << form1 << std::endl;

        Form  form1("form1", 140, 50);
        std::cout << form1 << std::endl;

        Bureaucrat ayoub("ayoub", 100);
        ayoub.signForm(form1);

        // Bureaucrat bob("Bob", 130);
        // Form form("TaxForm", 50, 50);
        // bob.signForm(form);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}