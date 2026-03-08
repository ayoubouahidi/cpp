#ifndef SHRUBBEY_HPP
# define SHRUBBEY_HPP
#include "AForm.hpp"

class ShrubberyCreationForm:AForm
{
    private:
        AForm form;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(AForm form);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

};
#endif