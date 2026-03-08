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
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        virtual void execute(Bureaucrat const& executor) const = 0;  
};
void check_required(AForm form, int sign, int exec);

#endif