#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm():form()
{}

ShrubberyCreationForm::ShrubberyCreationForm(AForm form):form(form)
{
    check_required(form, 145, 137);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):form(other.form)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this == &other)
        return *this;
    return *this;
}

