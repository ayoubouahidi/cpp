#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

    try
    {
        // Bureaucrat alice("Alice", 100);
        // ShrubberyCreationForm form("home");
        // alice.signForm(form);
        // alice.executeForm(form);
    
        Bureaucrat lowGuy("LowGuy", 150);
        ShrubberyCreationForm form("park");
        lowGuy.signForm(form); 
        lowGuy.executeForm(form); 
    }catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}