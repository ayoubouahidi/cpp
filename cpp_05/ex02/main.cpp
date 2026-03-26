#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{

    try
    {
        // Bureaucrat alice("Alice", 105);
        // ShrubberyCreationForm form("home");
        // alice.signForm(form);
        // alice.executeForm(form);

        // ***** failed test *******

        // Bureaucrat alice("Alice", 145);
        // ShrubberyCreationForm form("home");
        // alice.signForm(form);
        // alice.executeForm(form);


        // form.execute(alice);
    
        Bureaucrat lowGuy("LowGuy", 40);
        RobotomyRequestForm form1("park");
        lowGuy.signForm(form1); 
        lowGuy.executeForm(form1); 

        // ***** failed test *******

        // Bureaucrat lowGuy("LowGuy", 100);
        // RobotomyRequestForm form1("park");
        // lowGuy.signForm(form1); 
        // lowGuy.executeForm(form1); 


        

    }catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}