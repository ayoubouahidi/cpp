#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

    try
    {
        Intern someRandomIntern;
        Bureaucrat boss("Boss", 1);


        AForm* f1 = someRandomIntern.makeForm("ShrubberyCreationForm", "home");
        if (f1)
        {
            boss.signForm(*f1);
            boss.executeForm(*f1);
            delete f1;
        }

        // AForm* f2 = someRandomIntern.makeForm("UnknownForm", "target");
        // if (!f2)
        //     std::cout << "UnknownForm creation failed as expected" << std::endl;
        // else
        //     delete f2;

    }catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}