#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    try
    {

        // ********** shurbbery **********
        Bureaucrat alice("Alice", 105);
        ShrubberyCreationForm form("home");
        alice.signForm(form);
        alice.executeForm(form);
        // ***** failed test *******
        // Bureaucrat alice("Alice", 145);
        // ShrubberyCreationForm form("home");
        // alice.signForm(form);
        // alice.executeForm(form);

        // ********** robotisme **********
        Bureaucrat lowGuy("LowGuy", 40);
        RobotomyRequestForm form1("park");
        lowGuy.signForm(form1); 
        lowGuy.executeForm(form1); 
        // ***** failed test *******
        // Bureaucrat lowGuy("LowGuy", 100);
        // RobotomyRequestForm form1("park");
        // lowGuy.signForm(form1); 
        // lowGuy.executeForm(form1); 

        // ********** PresidentialPardonForm  **********
        Bureaucrat ouahidi("ouahidi", 4);
        PresidentialPardonForm form2("ouahidi'test");
        ouahidi.signForm(form2); 
        ouahidi.executeForm(form2);
         // ***** failed test *******
        //  Bureaucrat ouahidi("ouahidi", 10);
        // PresidentialPardonForm form2("ouahidi'test");
        // ouahidi.signForm(form2); 
        // ouahidi.executeForm(form2);

    }catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}