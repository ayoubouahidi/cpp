#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "default constructor" << std::endl;
}

Intern::~Intern()
{
     std::cout << "Intern Deconstructor " << std::endl;
}

Intern::Intern(const Intern& other)
{
    *this = other;
}


Intern& Intern::operator=(const Intern& other)
{
    std::cout << "Intern Assignation operator called" << std::endl;
    if (this == &other)
        return *this;
    return *this;
}


AForm* shurbbey_form(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* robotisme_form(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm* presidential_form(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string nameForm, std::string target)
{
    std::string form_name[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm *(*forms_function[])(std::string target_name) = {&shurbbey_form, &robotisme_form, &presidential_form};
    int i = 0;
    while (i < 3)
    {
        if (nameForm == form_name[i])
        {
            std::cout << "Intern creates " << nameForm << std::endl;
            return forms_function[i](target);
        }
        i++;
    }
    throw std::invalid_argument("Intern can not create a form called " + nameForm);
}


